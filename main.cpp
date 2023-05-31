#include "ArrayBST.h"
#include <iostream>
using namespace std;


int main()
{
    ArrayBST a;
    cout <<a.isEmpty() <<endl;
    a.addBST(13,0);
    a.addBST(10,1);
    a.addBST(8,2);
    a.addBST(15,3);
    a.addBST(100,4);
    a.addBST(45,5);
    a.addBST(89,6);
    a.addBST(1,7);

    a.searchBST(13);
    a.searchBST(10);
    a.searchBST(8);
    a.searchBST(15);
    a.searchBST(100);
    a.searchBST(45);
    a.searchBST(89);
    a.searchBST(1);

    // Removing 45
    a.remove(45);
    cout << a.searchBST(45) <<endl;


}