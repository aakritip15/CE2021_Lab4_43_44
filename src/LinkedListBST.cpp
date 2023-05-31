#include "LinkedListBST.h"

#include <stdio.h>
#include <iostream>
using namespace std;

LinkedListBST::LinkedListBST() : root(NULL) {}
LinkedListBST::~LinkedListBST(){
    delete root;
}

bool LinkedListBST::isEmpty(){
   return this->root == NULL;
}

void LinkedListBST::add(int key, int value)
{
    Node* newNode(new Node);
    newNode->data.key = key;
    newNode->data.key= value;
    newNode->leftchild = newNode->rightchild = NULL;
    
    if (this->isEmpty())
    {
        this->root = newNode;
    }
    else
    {
        this->add(this->root, newNode);
    }
}

void LinkedListBST::add(Node *subtreeRoot, Node *newNode)
{
    
    if (subtreeRoot->data.key > newNode->data.key) {
        if (subtreeRoot->leftchild != NULL) {
            add(subtreeRoot->leftchild, newNode);
        }
        else {
            subtreeRoot->leftchild = newNode;
        }
    }
    else if (subtreeRoot->data.key < newNode->data.key) {
        if (subtreeRoot->rightchild != NULL) {
            add(subtreeRoot->rightchild, newNode);
        }
        else {
            subtreeRoot->rightchild = newNode;
        }
    }
    else
    {
        // Duplicate key
        std::cout << "Duplicate key!!" << std::endl;
    }
}


bool LinkedListBST::searchBST(int targetKey) {
    bool found = false;
    
    if (this->isEmpty()) {
        std::cout << "The tree is empty!" << std::endl;
    } else  {
        Node* temp = this->root;
        
        while (temp != NULL) {
            if (temp->data.key == targetKey) {
                found = true;
                break;
            } else if (temp->data.key < targetKey) {
                temp = temp->rightchild;
            } else {
                temp = temp->leftchild;
            }
        }
        
    }
    return found;
}


void LinkedListBST::remove(int keytoDelete) {
    if (this->isEmpty()) {
        std::cout << "The tree is empty!" << std::endl;
        return;
    }

    Node* parent = nullptr;
    Node* current = this->root;
    bool found = false;

    // Searching the node with the key to delete
    while (current != nullptr) {
        if (current->data.key == keytoDelete) {
            found = true;
            break;
        } else if (current->data.key < keytoDelete) {
            parent = current;
            current = current->rightchild;
        } else {
            parent = current;
            current = current->leftchild;
        }
    }
    if (!found) {
        std::cout << "Key not found in the tree!" << std::endl;
        return;
    }

     // Case 1: Node to delete has no children
    if (current->leftchild == nullptr && current->rightchild == nullptr) {
        if (current == this->root) {
            this->root = nullptr;
        } else if (parent->leftchild == current) {
            parent->leftchild = nullptr;
        } else {
            parent->rightchild = nullptr;
        }
        
        delete current;
    }

    // Case 2: Node to delete has only one child
    else if (current->leftchild == nullptr || current->rightchild == nullptr) {
        Node* child = (current->leftchild != nullptr) ? current->leftchild : current->rightchild;
        
        if (current == this->root) {
            this->root = child;
        } else if (parent->leftchild == current) {
            parent->leftchild = child;
        } else {
            parent->rightchild = child;
        }
        
        delete current;
    }

// Case 3: Node to delete has two children
    else {
        Node* successorParent = current;
        Node* successor = current->rightchild;
        
        while (successor->leftchild != nullptr) {
            successorParent = successor;
            successor = successor->leftchild;
        }
         current->data = successor->data;
        
        if (successorParent->leftchild == successor) {
            successorParent->leftchild = successor->rightchild;
        } else {
            successorParent->rightchild = successor->rightchild;
        }
        
        delete successor;
    }
}