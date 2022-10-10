#include "HeapInterface.h"
#include "ArrayMaxHeap.h"
#include "PrecondViolatedExcep.h"
#include <iostream>

int main()
{
	ArrayMaxHeap<int>* myHeap = new ArrayMaxHeap<int>();
	//Add values to heap tree
	myHeap->add(25);
	myHeap->add(30);
	myHeap->add(20);
	myHeap->add(80);
	myHeap->add(40);
	myHeap->add(60);

	//Display number of tree nodes
	std::cout << "Number of tree nodes: " << myHeap->getNumberOfNodes() << "\n";
	//Display the max value
	std::cout << "The max value: " << myHeap->peekTop() << "\n";

	return 0;
}//end main