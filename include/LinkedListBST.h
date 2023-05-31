#ifndef LinkedListBST_h
#define LinkedListBST_h

#include "AbstractBST.h"

struct Data{
    int key;
    int value;
};

struct Node{
    Data data;

    Node* leftchild;
    Node* rightchild;
};

class LinkedListBST : public AbstractBST{
    public:

    LinkedListBST();
    ~LinkedListBST();

    bool isEmpty();
    

    private:
    Node *root;
    void add(int key, int value);
    void add(Node* subtreeRoot, Node* newNode);
    bool searchBST(int targetKey) ;
    void remove(int keytoDelete);
};

#endif