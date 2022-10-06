//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

#include "ArrayList.h"
#include <iostream>
#include <string>

//Prototype
bool swapReverse(ListInterface<std::string>* aList);


int main()
{
   ListInterface<std::string>* listPtr = new ArrayList<std::string>();
   
   string data[] = {"one", "two", "three", "four", "five", "six"};
   
   cout << "isEmpty: returns " << listPtr->isEmpty()
   << "; should be 1 (true)" << endl;
   
   for (int i = 0; i < 6; i++)
   {
      if (listPtr->insert(i + 1, data[i]))
         cout << "Inserted " << listPtr->getEntry(i + 1)
         << " at position " << (i + 1) << endl;
      else
         cout << "Cannot insert " << data[i] << " at position " << (i + 1)
         << endl;
   }  // end for
   bool status = swapReverse(listPtr);
   std::cout << status << endl;
   
   return 0;
}  // end main

bool swapReverse(ListInterface<std::string>* aList)
{
    //Create variable that contains the status of the swap
    bool swapStatus = false;
    //get length of array
    int length = aList->getLength();
    std::cout<< length << "\n";
    //Iterate the until all array is swapped in reverse order
//    for(int i = 0; i < length; i++)
//    {
//        
//        std::string dataA = aList.getEntry(i);
//        std::string dataB = aList.getEntry();
//        
//    }
    
    return swapStatus;
}