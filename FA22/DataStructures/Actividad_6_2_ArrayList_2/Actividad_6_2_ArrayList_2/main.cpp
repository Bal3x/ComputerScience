//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

#include "ArrayList.h"
#include <iostream>
#include <string>

int main()
{
    //ListInterface<string>* listPtr = new ArrayList<string>();
    //ArrayList<int>* listPtr = new ArrayList<int>();
    ArrayList<int> listPtr;
    int const n = 11;
    int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    //string data[] = { "one", "two", "three", "four", "five", "six" };
    cout << "isEmpty: returns " << listPtr.isEmpty()
        << "; should be 1 (true)" << endl;
    for (int i = 0; i < 12; i++)
    {
        if (listPtr.insert(i + 1, data[i]))
            cout << "Inserted " << listPtr.getEntry(i + 1)
            << " at position " << (i + 1) << endl;
        else
            cout << "Cannot insert " << data[i] << " at position " << (i + 1)
            << endl;
    }  // end for

    return 0;
}  // end main
