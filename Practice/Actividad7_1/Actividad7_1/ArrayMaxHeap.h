//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Array-based implementation of the ADT heap.
 Listing 17-2.
 @file ArrayMaxHeap.h */

#ifndef _ARRAY_MAX_HEAP
#define _ARRAY_MAX_HEAP

#include <iostream>
#include "HeapInterface.h"
#include "PrecondViolatedExcep.h"
using namespace::std;

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
	void swap(ItemType a, ItemType b);
}; // end ArrayMaxHeap

template<class ItemType>
ArrayMaxHeap<ItemType>::ArrayMaxHeap() : itemCount(0), maxItems(DEFAULT_CAPACITY)
{
	items = new ItemType[DEFAULT_CAPACITY];
}//end Default Constructor

template<class ItemType>
ArrayMaxHeap<ItemType>::ArrayMaxHeap(const ItemType someArray[], const int arraySize) : itemCount(arraySize), maxItems(2 * arraySize)
{
	items = new ItemType[2 * arraySize];
	for (int i = 0; i < itemCount; i++)
	{
		items[i] = someArray[i];
		heapCreate();
	}//end for
}//end Constructor

template<class ItemType>
ArrayMaxHeap<ItemType>::~ArrayMaxHeap()
{
	delete[] items;
}//end Destructor

template<class ItemType>
int ArrayMaxHeap<ItemType>::getLeftChildIndex(const int nodeIndex) const
{
	return (2 * nodeIndex) + 1;
}  // end getLeftChildIndex

template<class ItemType>
int ArrayMaxHeap<ItemType>::getRightChildIndex(int nodeIndex) const
{
	return (2 * nodeIndex) + 2;
}//end getRightChildIndex


template<class ItemType>
int ArrayMaxHeap<ItemType>::getParentIndex(int nodeIndex) const
{
	return (nodeIndex - 1) / 2;
}//end getParentIndex

template<class ItemType>
bool ArrayMaxHeap<ItemType>::isLeaf(int nodeIndex) const
{
	return (getLeftChildIndex(nodeIndex) >= itemCount);
}//end isLeaf

template<class ItemType>
void ArrayMaxHeap<ItemType>::heapRebuild(int subTreeRootIndex)
{
	//STUD
	if (!isLeaf(subTreeRootIndex))
	{
		int leftChild = getLeftChildIndex(subTreeRootIndex);
		int largestChild = leftChild;

		int rightChild = getRightChildIndex(subTreeRootIndex);
		if (rightChild < itemCount)
		{
			if (items[rightChild] > items[largestChild])
			{
				largestChild = rightChild;
			}//end if
			if (items[subTreeRootIndex] < items[largestChild])
			{
				swap(items[largestChild], items[subTreeRootIndex]);
				heapRebuild(largestChild);
			}//end if
		}//end if
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

//template<class ItemType>
//ArrayMaxHeap<ItemType>::ArrayMaxHeap(const ItemType someArray[], const int arraySize) :
//	itemCount(arraySize), maxItems(2 * arraySize)
//{
//	// Allocate the array
//	items = new ItemType[2 * arraySize];
//
//	// Copy given values into the array
//	for (int i = 0; i < itemCount; i++)
//		items[i] = someArray[i];
//
//	// Reorganize the array into a heap
//	heapCreate();
//} // end constructor

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
	double h = log(itemCount + 1) / log(2);
	return ceil(h);
}//end getHeight

template<class ItemType>
bool ArrayMaxHeap<ItemType>::add(const ItemType& newData)
{
	bool status = false;
	if (itemCount < maxItems)
	{
		items[itemCount] = newData;
		bool inPlace = false;
		int dataIndex = itemCount;
		while ((dataIndex > 0) && !inPlace)
		{
			int parentIndex = getParentIndex(dataIndex);
			if (items[dataIndex] < items[parentIndex])
				inPlace = true;
			else
			{
				swap(items[dataIndex], items[parentIndex]);
				dataIndex = parentIndex;
			}//end if
		}//end while
		itemCount++;
		status = true;
	}
	return status;
}//end add

template<class ItemType>
bool ArrayMaxHeap<ItemType>::remove()
{
	bool status = false;
	if (!isEmpty())
	{
		items[ROOT_INDEX] = items[itemCount - 1];
		itemCount--;
		heapRebuild(ROOT_INDEX);
		status = true;
	}//end if
	return status;
}//end remove

template<class ItemType>
void ArrayMaxHeap<ItemType>::clear()
{
	itemCount = 0;
}//end clear

template<class ItemType>
void ArrayMaxHeap<ItemType>::swap(ItemType a, ItemType b)
{
	ItemType temp = a;
	a = b;
	b = temp;
}//end swap

#endif
