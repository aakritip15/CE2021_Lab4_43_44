#ifndef  AbstractBST_h 
#define AbstractBST_h

class  AbstractBST
{
private: 
     AbstractBST();
    ~ AbstractBST();
    virtual void isEmpty();
    virtual void addBST(int *key, int *array) = 0 ;
    virtual void remove(int keytoDelete) =0 ;
    virtual void searchBST(int targetKey) = 0;

    // virtual void max(int &output ) = 0;
    // virtual void min(int &output ) = 0;
    // virtual void inorder()= 0;

};





#endif