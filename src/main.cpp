#include "LinkedListBST.h"
#include <iostream>
using namespace std;


int main()
{

    ArrayBST a;
    cout << "Is Empty : " <<a.isEmpty() <<endl;

    cout<< "Adding (Key, Value) pair of (13,0),(10,1),(8,2),(15,3),(100,4),(45,5),(1,7)" <<endl;
    a.addBST(13,0);
    a.addBST(10,1);
    a.addBST(8,2);
    a.addBST(15,3);
    a.addBST(100,4);
    a.addBST(45,5);
    a.addBST(1,7);
   
    cout<< "Search key 13 : " <<a.searchBST(13) <<endl;
    cout<< "Search key 10 : " <<a.searchBST(10) <<endl;
    cout<< "Search key 8 : " <<a.searchBST(8) <<endl;
    cout<< "Search key 15 : " <<a.searchBST(15) <<endl;
    cout<< "Search key 100 : " <<a.searchBST(100) <<endl;
    cout<< "Search key 45 : " <<a.searchBST(45) <<endl;
    cout<< "Search key 89 : " <<a.searchBST(89) <<endl;
    cout<< "Search key 1 : " <<a.searchBST(1) <<endl;

    cout << "Removing Key 45" <<endl;
    a.remove(45);
    
    cout<<"Search key 45: " << a.searchBST(45) <<endl;


    LinkedBST tree;
    tree.addBST(5);
    tree.addBST(3);
    tree.addBST(7);
    tree.addBST(2);
    tree.addBST(4);
    tree.addBST(6);
    tree.addBST(8);

    cout << "Inorder Traversal" << endl;
    tree.inorder();

    int value;
    cout << "Enter a value to search ";
    cin >> value;
    if (tree.searchBST(value)) {
        cout << "Value is found!" << endl;
    }
    else {
        cout << "Value is not found!" << endl;
    }

    int removeValue;
    cout << "Enter a value to remove ";
    cin >> removeValue;
    tree.removeBST(removeValue);
    cout << "Inorder Traversal after removing:" << endl;
    tree.inorder();

    // delete tree;
    return 0;


}