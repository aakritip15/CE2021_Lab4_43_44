#include "ArrayBST.h"
#include "LinkedListBST.h"
#include <iostream>
using namespace std;

int main()
{
    // Array BST Implementation
    ArrayBST a;
    cout << "Is Empty : " << a.isEmpty() << endl;

    cout << "Adding (Key, Value) pair of (8,0),(10,1),(3,2),(1,3),(6,4),(14,5),(4,9),(7,6),(13,20)" << endl;
    a.addBST(8, 0);
    a.addBST(10, 1);
    a.addBST(3, 2);
    a.addBST(1, 3);
    a.addBST(6, 4);
    a.addBST(14, 5);
    a.addBST(4, 9);
    a.addBST(7, 6);
    a.addBST(13, 20);

    cout << "Search key 8 : " << a.searchBST(8) << endl;
    cout << "Search key 10 : " << a.searchBST(10) << endl;
    cout << "Search key 3 : " << a.searchBST(3) << endl;
    cout << "Search key 1: " << a.searchBST(1) << endl;
    cout << "Search key 6 : " << a.searchBST(6) << endl;
    cout << "Search key 14 : " << a.searchBST(14) << endl;
    cout << "Search key 4 : " << a.searchBST(4) << endl;
    cout << "Search key 7 : " << a.searchBST(7) << endl;
    cout << "Search key 13 : " << a.searchBST(13) << endl;

    cout << "Removing Key 13" << endl;
    a.remove(13);

    cout << "Search key 13: " << a.searchBST(45) << endl;

    // LinkedList BST
    LinkedListBST bst;

    // Insert nodes into the binary search tree
    bst.add(5, 50);
    bst.add(3, 30);
    bst.add(7, 70);
    bst.add(2, 20);
    bst.add(4, 40);
    bst.add(6, 60);
    bst.add(8, 80);

    // Search for a key in the binary search tree
    int targetKey = 4;
    bool found = bst.searchBST(targetKey);
    if (found)
    {
        std::cout << "Key " << targetKey << " found in the tree." << std::endl;
    }
    else
    {
        std::cout << "Key " << targetKey << " not found in the tree." << std::endl;
    }

    // Remove a node from the binary search tree
    int keyToDelete = 7;
    bst.remove(keyToDelete);
    std::cout << "Binary Search Tree after deleting key " << keyToDelete << ": ";
    bst.displayBST();
    std::cout << std::endl;

    return 0;
   
}
