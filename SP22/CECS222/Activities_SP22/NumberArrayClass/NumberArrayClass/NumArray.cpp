#include <iostream>
#include "NumArray.h"

using namespace::std;

//constructors
NumArray::NumArray() {
	//initialize to 0
	const int SIZE = 10;
	array = new float[SIZE];
	ArrSIZE = SIZE;
	for (int i = 0; i < SIZE; i++) {
		array[i] = 0;
	}//end for
}
NumArray::NumArray(int SIZE) {
	ArrSIZE = SIZE;
	array = new float[SIZE];
	for (int i = 0; i < SIZE; i++) {
		array[i] = 0;
	}//end for
}
NumArray::NumArray(const NumArray &obj) {
	ArrSIZE = obj.ArrSIZE;
	array = new float[ArrSIZE];
	for (int i = 0; i < ArrSIZE; i++) {
		array[i] = obj.array[i];
	}//end for
}
//destructor
NumArray::~NumArray() {
	delete[] array;
	array = nullptr;
}
//***************Mutators member functions***********************************
//member function that sets the number of elements in the array
void NumArray::setElement(int numElem, float value) {
	*(array + numElem) = value;
}
//member function that returns the number of elements in the array
float NumArray::getElement(int numElem) const {
	return array[numElem];
}
//member function that returns the highest value of the array
float NumArray::findHighestValue() {
	bubbleSort();
	return array[ArrSIZE - 1];
}
//member function that returns the lowest value of the array
float NumArray::findLowestValue() {
	bubbleSort();
	return array[0];
}
//member function that sorts the array
void NumArray::bubbleSort() {
	bool swap;
	int temp;
	do{
		swap = false;
		for (int count = 0; count < (ArrSIZE - 1); count++){
			if (array[count] > array[count + 1]){
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}//end if
		}//end for
	} while (swap);
}
//member function that finds the average of all the numbers stored in the array
float NumArray::findAverage() {
	float total = 0;
	for (int i = 0; i < ArrSIZE; i++) {
		total += *(array + i);
	}
	return total / ArrSIZE;
}
//member function that displays the contents of the array
void NumArray::display(int n) const {
	cout << getElement(n) << " ";
}

