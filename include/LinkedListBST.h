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
    void add(int key, int value) =0;
    void remove(int keytoDelete) =0 ;
    void searchBST(int targetKey) = 0;

};

#endif
// hew