#ifndef ArrayBST_h
#define ArrayBST_h

#include "AbstractBST.h"
#define MAX_NUM_NODES 20
#define NULL __null

struct ArrayNode
{
    int key ;
    int value;

    ArrayNode(){
        key = NULL;
        value = NULL;
    };
    ArrayNode(int key , int value) : key(key), value (value) {}
};

class ArrayBST : public AbstractBST{
    public:

    ArrayBST();
    ~ArrayBST();
    bool isEmpty();
    void addBST(int key, int value)  ;
    void remove(int keytoDelete) ;
    bool searchBST(int targetKey) ;

    private:
    ArrayNode Array[MAX_NUM_NODES];
    int size ;
};

#endif