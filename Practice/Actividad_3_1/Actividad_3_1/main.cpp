#include <iostream>
#include <string>
#include "ArrayBag.h"
#include <vector>


void displayBag(ArrayBag < std::string> & bag)
{
    cout << "The bag contains " << bag.getCurrentSize()
        << " items:" << endl;
    vector<std::string> bagItems = bag.toVector();

    int numberOfEntries = (int)bagItems.size();
    for (int i = 0; i < numberOfEntries; i++)
    {
        cout << bagItems[i] << " ";
    }  // end for
    cout << endl << endl;
}  // end displayBag

void bagTester(ArrayBag<std::string>& bag)
{
    cout << "isEmpty: returns " << bag.isEmpty()
        << "; should be 1 (true)" << endl;
    displayBag(bag);

    std::string items[] = { "one", "two", "three", "four", "five", "one" };
    cout << "Add 6 items to the bag: " << endl;
    for (int i = 0; i < 6; i++)
    {
        bag.add(items[i]);
    }  // end for

    displayBag(bag);
}//end bagTester
int main()
{
    ArrayBag<std::string> bag1;  //Create a new bag
    bagTester(bag1);    //call bagTester to test bag    
    std::cout << "\n";

    ArrayBag<std::string> bag2;  //Create a new bag

    //Declare a string of items
    std::string items[] = { "ten", "nine", "eight", "seven", "three" };

    for (int i = 0; i < 5; i++)
    {
        bag2.add(items[i]);
    }//end for
    displayBag(bag2);

    ArrayBag<std::string> unionBag = bag1.bagUnion(bag2);
    std::cout << "Union Bag: " << endl;
    displayBag(unionBag);

    ArrayBag<std::string> intersectionBag = bag1.bagIntersection(bag2);
    std::cout << "Intersection Bag: " << endl;
    displayBag(intersectionBag);

    ArrayBag<std::string> differenceBag = bag1.bagDifference(bag2);
    std::cout << "Difference Bag: " << endl;
    displayBag(differenceBag);

    system("pause");

    return 0;
}//end main    