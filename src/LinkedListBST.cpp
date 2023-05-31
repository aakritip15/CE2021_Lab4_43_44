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
    newNode->data.data = value;
    newNode->leftChild = newNode->rightChild = NULL;
    
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
        if (subtreeRoot->leftChild != NULL) {
            add(subtreeRoot->leftChild, newNode);
        }
        else {
            subtreeRoot->leftChild = newNode;
        }
    }
    else if (subtreeRoot->data.key < newNode->data.key) {
        if (subtreeRoot->rightChild != NULL) {
            add(subtreeRoot->rightChild, newNode);
        }
        else {
            subtreeRoot->rightChild = newNode;
        }
    }
    else
    {
        // Duplicate key
        std::cout << "Duplicate key!!" << std::endl;
    }
}

