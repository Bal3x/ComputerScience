#include "BagInterface.h"
#include <iostream>
#include <cstddef>
#include <string>


template<class ItemType>
class ArrayBag : public BagInterface<ItemType>
{
private:
    static const int DEFAULT_CAPACITY = 15; // Small size to test for a full bag
    ItemType items[DEFAULT_CAPACITY];      // Array of bag items
    int itemCount;                         // Current count of bag items 
    int maxItems;                          // Max capacity of the bag

    // Returns either the index of the element in the array items that
    // contains the given target or -1, if the array does not contain 
    // the target.
    int getIndexOf(const ItemType& target) const;

public:
    ArrayBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEntry);
    void clear();
    bool contains(const ItemType& anEntry) const;
    int getFrequencyOf(const ItemType& anEntry) const;
    void display() const;
    vector<ItemType> toVector() const;
    ArrayBag<ItemType> bagUnion(ArrayBag<ItemType>& aBag);
    ArrayBag<ItemType> bagIntersection(ArrayBag<ItemType>& aBag);
    ArrayBag<ItemType> bagDifference(ArrayBag<ItemType>& aBag);
}; // end ArrayBag


/**Implementation**/
template<class ItemType>
ArrayBag<ItemType>::ArrayBag() : itemCount(0), maxItems(DEFAULT_CAPACITY)
{
}  // end default constructor

template<class ItemType>
int ArrayBag<ItemType>::getCurrentSize() const
{
    return itemCount;
}  // end getCurrentSize

template<class ItemType>
bool ArrayBag<ItemType>::isEmpty() const
{
    return itemCount == 0;
}  // end isEmpty

template<class ItemType>
bool ArrayBag<ItemType>::add(const ItemType& newEntry)
{
    bool hasRoomToAdd = (itemCount < maxItems);
    if (hasRoomToAdd)
    {
        items[itemCount] = newEntry;
        itemCount++;
    }  // end if

    return hasRoomToAdd;
}  // end add
//
//template<class ItemType>
//bool ArrayBag<ItemType>::add(const ItemType& newEntry)
//{
//    bool hasRoomToAdd = (itemCount < maxItems);
//    if(!hasRoomToAdd)
//    {
//        ItemType*
//    }
//}
/*
// STUB
 template<class ItemType>
 bool ArrayBag<ItemType>::remove(const ItemType& anEntry)
 {
    return false; // STUB
 }  // end remove
*/

template<class ItemType>
bool ArrayBag<ItemType>::remove(const ItemType& anEntry)
{
    int locatedIndex = getIndexOf(anEntry);
    bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
    if (canRemoveItem)
    {
        itemCount--;
        items[locatedIndex] = items[itemCount];
    }  // end if

    return canRemoveItem;
}  // end remove

/*
 // STUB
 template<class ItemType>
 void ArrayBag<ItemType>::clear()
 {
    // STUB
 }  // end clear
*/

template<class ItemType>
void ArrayBag<ItemType>::clear()
{
    itemCount = 0;
}  // end clear

template<class ItemType>
int ArrayBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const
{
    int frequency = 0;
    int curIndex = 0;       // Current array index
    while (curIndex < itemCount)
    {
        if (items[curIndex] == anEntry)
        {
            frequency++;
        }  // end if

        curIndex++;          // Increment to next entry
    }  // end while

    return frequency;
}  // end getFrequencyOf

template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& anEntry) const
{
    return getIndexOf(anEntry) > -1;
}  // end contains

/* ALTERNATE 1: First version
template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& target) const
{
   return getFrequencyOf(target) > 0;
}  // end contains

// ALTERNATE 2: Second version
template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& anEntry) const
{
   bool found = false;
   int curIndex = 0;        // Current array index
   while (!found && (curIndex < itemCount))
   {
      if (anEntry == items[curIndex])
      {
         found = true;
      } // end if

      curIndex++;           // Increment to next entry
   }  // end while

   return found;
}  // end contains
*/

template<class ItemType>
vector<ItemType> ArrayBag<ItemType>::toVector() const
{
    vector<ItemType> bagContents;
    for (int i = 0; i < itemCount; i++)
        bagContents.push_back(items[i]);

    return bagContents;
}  // end toVector

// private
template<class ItemType>
int ArrayBag<ItemType>::getIndexOf(const ItemType& target) const
{
    bool found = false;
    int result = -1;
    int searchIndex = 0;

    // If the bag is empty, itemCount is zero, so loop is skipped
    while (!found && (searchIndex < itemCount))
    {
        if (items[searchIndex] == target)
        {
            found = true;
            result = searchIndex;
        }
        else
        {
            searchIndex++;
        }  // end if
    }  // end while

    return result;
}  // end getIndexOf
template<class ItemType>
void ArrayBag<ItemType>::display() const
{
    for (int count = 0; count < getCurrentSize(); count++) {
        std::cout << items[count] << ",";
    }//end for
    cout << endl;
} //end display

template <class ItemType>
ArrayBag<ItemType> ArrayBag<ItemType>::bagUnion(ArrayBag<ItemType>& aBag)
{
    ArrayBag<ItemType> newBag;

    vector<ItemType> vector1 = toVector();

    for (int i = 0; i < getCurrentSize(); i++)
    {
        newBag.add(vector1.at(i));
    }//end for

    vector<ItemType> vector2 = aBag.toVector();
    for (int i = 0; i < aBag.getCurrentSize(); i++)
    {
        newBag.add(vector2.at(i));
    }
    return newBag;
}//end bagUnion

template <class ItemType>
ArrayBag<ItemType> ArrayBag<ItemType>::bagIntersection(ArrayBag<ItemType>& aBag)
{
    ArrayBag<ItemType> newBag;

    vector vector1 = toVector();
    vector vector2 = aBag.toVector();

    for (int i = 0; i < getCurrentSize(); i++)
    {
        if (aBag.contains(vector1.at(i)))
            newBag.add(vector1.at(i));
    }//end for
    return newBag;
}//end bagIntersection


template <class ItemType>
ArrayBag<ItemType> ArrayBag<ItemType>::bagDifference(ArrayBag<ItemType>& aBag)
{
    ArrayBag<ItemType> newBag;

    vector vector1 = toVector();
    vector vector2 = aBag.toVector();
    for (int i = 0; i < getCurrentSize(); i++)
    {
        if (!aBag.contains(vector1.at(i)))
            newBag.add(vector1.at(i));
    }//end for
    return newBag;
}//end bagDifferenceg