//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Array-based implementation of the ADT heap.
 Listing 17-2.
 @file ArrayMaxHeap.h */ 
 
#ifndef _ARRAY_MAX_HEAP
#define _ARRAY_MAX_HEAP

#include "HeapInterface.h"
#include "PrecondViolatedExcep.h"
#include <stdio.h>

template<class ItemType>
class ArrayMaxHeap : public HeapInterface<ItemType>
{
private:
   static const int ROOT_INDEX = 0;        // Helps with readability
   static const int DEFAULT_CAPACITY = 21; // Small capacity to test for a full heap
   ItemType* items;                        // Array of heap items
   int itemCount;                          // Current count of heap items
   int maxItems;                           // Maximum capacity of the heap
   
   // ---------------------------------------------------------------------
   // Most of the private utility methods use an array index as a parameter
   // and in calculations. This should be safe, even though the array is an
   // implementation detail, since the methods are private.
   // ---------------------------------------------------------------------
   
   // Returns the array index of the left child (if it exists).
   int getLeftChildIndex(const int nodeIndex) const;
   
   // Returns the array index of the right child (if it exists).
   int getRightChildIndex(int nodeIndex) const;
   
   // Returns the array index of the parent node.
   int getParentIndex(int nodeIndex) const;
   
   // Tests whether this node is a leaf.
   bool isLeaf(int nodeIndex) const;
   
   // Converts a semiheap to a heap.
   void heapRebuild(int subTreeRootIndex);
   
   // Creates a heap from an unordered array.
   void heapCreate();
   
public:
   ArrayMaxHeap();
   ArrayMaxHeap(const ItemType someArray[], const int arraySize);
   virtual ~ArrayMaxHeap();
   
   // HeapInterface Public Methods:
   bool isEmpty() const;
   int getNumberOfNodes() const;
   int getHeight() const;
   ItemType peekTop() const throw(PrecondViolatedExcep);
   bool add(const ItemType& newData);
   bool remove();
   void clear();
}; // end ArrayMaxHeap

//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Array-based implementation of the ADT heap.
 @file ArrayMaxHeap.cpp */

// PARTIALLY COMPLETE
 

template<class ItemType>
int ArrayMaxHeap<ItemType>::getLeftChildIndex(const int nodeIndex) const
{
   return (2 * nodeIndex) + 1;
}  // end getLeftChildIndex

template<class ItemType>
int ArrayMaxHeap<ItemType>:: getRightChildIndex(int nodeIndex) const
{
    return (2 * nodeIndex) + 2;
}//end getRightChildIndex

template<class ItemType>
int ArrayMaxHeap<ItemType>::getParentIndex(int nodeIndex) const
{
    return (nodeIndex - 1)/2;
}//end getParentIndex

template<class ItemType>
bool ArrayMaxHeap<ItemType>::isLeaf(int nodeIndex) const
{
    return (getLeftChildIndex(nodeIndex) >= itemCount);
}//end isLeaf

template<class ItemType>
void ArrayMaxHeap<ItemType>::heapRebuild(int subTreeRootIndex)
{
    //Recursively trickle the item at index nodeIndex down to its proper position by
    //swapping it with its larger child, if the child if larger that the item.
    //if the item is at a leaf, nothing needs to be done
    if(!isLeaf(subTreeRootIndex))
    {
        //The root must have a left child; find larger child
        int leftChildIndex = 2 * getLeftChildIndex(subTreeRootIndex) + 1;
        int rightChildIndex = leftChildIndex + 1;
        int largerChildIndex = rightChildIndex; //Assume right child exists and is the larger
        
        //Check whether right child exists; if so is left child larger?
        if ((largerChildIndex >= itemCount) || (items[leftChildIndex] > items[rightChildIndex]))
        {
            largerChildIndex = leftChildIndex;  //Assumption was wrong
        }//end if
        if(items[subTreeRootIndex] < items[largerChildIndex])
        {
            swap(items[subTreeRootIndex], items[largerChildIndex]);
            //Transform the semiheap rooted at largeChildIndex into a heap
            heapRebuild(largerChildIndex);
        }//end if
        //else root is a leaf, so you are done
    }
}//end heapRebuild

template<class ItemType>
void ArrayMaxHeap<ItemType>::heapCreate() 
{
   for (int index = itemCount / 2; index >= 0; index--)
   {
      heapRebuild(index);  
   }  // end for
}  // end heapCreate

template<class ItemType>
ArrayMaxHeap<ItemType>::
ArrayMaxHeap(const ItemType someArray[], const int arraySize):
             itemCount(arraySize), maxItems(2 * arraySize)
{
   // Allocate the array
   items = new ItemType[2 * arraySize];
   
   // Copy given values into the array
   for (int i = 0; i < itemCount; i++)
      items[i] = someArray[i];
   
   // Reorganize the array into a heap
   heapCreate();
} // end constructor

template<class ItemType>
ItemType ArrayMaxHeap<ItemType>::peekTop() const throw(PrecondViolatedExcep)
{
   if (isEmpty())
      throw PrecondViolatedExcep("Attempted peek into an empty heap.");
   
   return items[0];
} // end peekTop


template<class ItemType>
bool ArrayMaxHeap<ItemType>::isEmpty() const
{
    return itemCount == 0;
}//end isEmpty

template<class ItemType>
int ArrayMaxHeap<ItemType>::getNumberOfNodes() const
{
    return itemCount;
}//end getNumberOfNodes

template<class ItemType>
int ArrayMaxHeap<ItemType>::getHeight() const
{
   //STUD 
   return maxItems;
   
}//end getHeight
   
template<class ItemType>
bool ArrayMaxHeap<ItemType>::add(const ItemType& newData)
{
   //Place newData at the bottom of the tree
   items[itemCount] = newData;
   
   //Make new item bubble up to the appropiate spot in the tree
   int newDataIndex = itemCount;
   bool inPlace = false;
   while((newDataIndex >= 0) && !inPlace)
   {
       int parentIndex = (newDataIndex - 1) / 2;
       if(items[newDataIndex] <= items[parentIndex])
           inPlace = true;
        else
        {
            swap(items[newDataIndex], items[parentIndex]);
            newDataIndex = parentIndex;
        }//end if
   }//end while
   itemCount++
   
   return inPlace;
   
}//end add

template<class ItemType>
bool ArrayMaxHeap<ItemType>::remove()
{
   //STUD 

}//end remove

template<class ItemType>
void ArrayMaxHeap<ItemType>::clear()
{
   //STUD 
}//end clear
#endif