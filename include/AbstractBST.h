#ifndef  AbstractBST_h 
#define AbstractBST_h

class  AbstractBST
{
public: 
     AbstractBST(){};
    ~ AbstractBST(){};
    virtual bool isEmpty() = 0;
    virtual void addBST(int key, int value) = 0 ;
    virtual void remove(int keytoDelete) =0 ;
    virtual bool searchBST(int targetKey) = 0;

};

#endif