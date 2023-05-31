#include "ArrayBST.h"

#include <iostream>

using namespace std;

ArrayBST::ArrayBST()
{
    size = 0;
}

ArrayBST::~ArrayBST()
{
}

bool ArrayBST ::isEmpty()
{
    if (size == 0)
        return true;
    return false;
}

void ArrayBST ::addBST(int key, int value)
{
    if (size == MAX_NUM_NODES)
    {
        cout << "Sorry! The array exceeds its maximum size" << endl;
        return;
    }
    if (size == 0)
    {
        Array[0] = ArrayNode(key, value);
        size++;
        return;
    }

    int currentindex = 0;
    while (true)
    {
        if (key > Array[currentindex].key)
        {
            if ((2 * currentindex + 2) >= MAX_NUM_NODES)
            {
                cout << "Sorry! The array exceeds its maximum size" << endl;
                return;
            }
            currentindex = 2 * currentindex + 2;
        }

        else if (key < Array[currentindex].key)
        {
            if ((2 * currentindex + 1) >= MAX_NUM_NODES)
            {
                cout << "Sorry! The array exceeds its maximum size" << endl;
                return;
            }
            currentindex = 2 * currentindex + 1;
        }

        else
        { // update value for common key
            Array[currentindex].value = value;
            return;
        }

        if (Array[currentindex].key == NULL)
        {
            Array[currentindex] = ArrayNode(key, value);
            size++;
            return;
        }
    }
}

void ArrayBST ::remove(int keytoDelete)
{
    if (size == 0)
    {
        cout << "Array is empty, nothing to delete" << endl;
        return;
    }

    int currentIndex = 0;
    while (true)
    {
        if (keytoDelete > Array[currentIndex].key)
        {
            if ((2 * currentIndex + 2) >= MAX_NUM_NODES)
            {
                cout << "Key not found" << endl;
                return;
            }
            currentIndex = 2 * currentIndex + 2;
        }

        else if (keytoDelete < Array[currentIndex].key)
        {
            if ((2 * currentIndex + 1) >= MAX_NUM_NODES)
            {
                cout << "Key not found" << endl;
                return;
            }
            currentIndex = 2 * currentIndex + 1;
        }
      else {
            bool onlyleft = false; //if the node is only left child
            // Key found

            // Case: 1   Node has two children

            if (2 * currentIndex + 1 < MAX_NUM_NODES && Array[2 * currentIndex + 1].key != 0 &&
                2 * currentIndex + 2 < MAX_NUM_NODES && Array[2 * currentIndex + 2].key != 0) {
                // if(onlyleft) // go to the greatest element of left child 
                // {
                //     int successorIndex = 2 * currentIndex + 2;
                // while (2 * successorIndex + 1 < MAX_NUM_NODES && Array[2 * successorIndex + 1].key != 0) {
                //     successorIndex = 2 * successorIndex + 1;
                // }
                // Array[currentIndex] = Array[successorIndex];
                // currentIndex = successorIndex; 
                // }
                // else{
                
                // go to the least element of right child 
                int successorIndex = 2 * currentIndex + 1;
                while (2 * successorIndex + 2 < MAX_NUM_NODES && Array[2 * successorIndex + 2].key != 0) {
                    successorIndex = 2 * successorIndex + 2;
                }
                Array[currentIndex] = Array[successorIndex];
                currentIndex = successorIndex;
                // }
            }
            // Case: 2  Node has only left child
             else if (2 * currentIndex + 1 < MAX_NUM_NODES && Array[2 * currentIndex + 1].key != 0) { 
                Array[currentIndex] = Array[2 * currentIndex + 1];             
                currentIndex = 2 * currentIndex + 1;
                // onlyleft = true;
            }
            // Case: 3 Node has only right child
             else if (2 * currentIndex + 2 < MAX_NUM_NODES && Array[2 * currentIndex + 2].key != 0) {
                Array[currentIndex] = Array[2 * currentIndex + 2];
                currentIndex = 2 * currentIndex + 2;
            }
            // Case: 4 Node has  no childrean
             else {
                Array[currentIndex] = ArrayNode();
                return;
            }
        }

        // Key not found
        if (Array[currentIndex].key == NULL)
        {
            cout << "Key not found" << endl;
            return;
        }
    }
}

bool ArrayBST:: searchBST(int targetkey)
{
int currentIndex = 0;
while(true)
{
        if (targetkey > Array[currentIndex].key)
        {
            if ((2 * currentIndex + 2) >= MAX_NUM_NODES)
            {
                return false;
            }
            currentIndex = 2 * currentIndex + 2;
        }

        else if (targetkey < Array[currentIndex].key)
        {
            if ((2 * currentIndex + 1) >= MAX_NUM_NODES)
            {
                return false;
            }
            currentIndex = 2 * currentIndex + 1;
        }
        else
        {
         cout << "The value of key is" << Array[currentIndex].value << "The index  is " <<currentIndex<<endl;
         return true;
        }
        if(Array[currentIndex].key ==NULL)
        {
            return NULL;
        }
}
}
