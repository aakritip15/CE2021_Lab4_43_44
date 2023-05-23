#ifndef ArrayBST_h
#define ArrayBST_h

#include "AbstractBST.h"
#define MAX_NUM_NODES 20

struct ArrayNode
{
    int key ;
    int value;

    ArrayNode(int key , int value) : key(key), value (value) {}
};

class ArrayBST : public AbstractBST{
    public:

    ArrayBST();
    ~ArrayBST();
    bool isEmpty();
    void addBST(int *key, int *value) = 0 ;
    void remove(int keytoDelete) =0 ;
    void searchBST(int targetKey) = 0;

    private:
    ArrayNode *Array;

};




#endif