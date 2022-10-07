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
   
   std::string data[] = {"one", "two", "three", "four", "five", "six", "seven"};
   
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

   std::cout << "swapReverse successful? : " << swapReverse(listPtr) << endl;
   
   for(int i = 0; i < 6; i++)
   {
       std::cout << listPtr->getEntry(i + 1) << "\n";
   }//end for
   
   return 0;
}  // end main

bool swapReverse(ListInterface<std::string>* aList)
{
    //Create variable that contains the status of the swap
    bool swapStatus = false;
    //get length of array
    int length = aList->getLength();
//    std::cout<< length << "\n";
    
    //swap the items in the list
    for(int i = 0; i < length/2; i++)
    {
        for(int j = length - 1; j < length/2; j--)
        {
            swapStatus = true;
            std::string aTemp = aList->getEntry(i);
            std::string bTemp = aList->getEntry(j);
            aList->remove(i);
            aList->insert(i, bTemp);
            aList->remove(j);
            aList->insert(j, aTemp);
        }
    }//end for
    
    return swapStatus;
}//end swapReverse