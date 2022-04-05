#include <iostream>
#include "NumArray.h"

using namespace::std;
//prototypes
int arraySize();
void storeValuesArray(NumArray&, int);
void displayArr(NumArray, int);

int main() {
	int SIZE;
	int highestValue;
	float value = 0;
	//ask user for the number of elements in the array
	SIZE = arraySize();
	//create NumArray object
	NumArray myNumArray(SIZE);
	//store values in array
	storeValuesArray(myNumArray, SIZE);
	cout << endl;
	//display the array elements
	displayArr(myNumArray, SIZE);
	cout << endl;
	//find the highest value of the array
	cout << "The Highest Value is: " << myNumArray.findHighestValue() << endl;
	//find the highest value of the array
	cout << "The Lowest Value is: " << myNumArray.findLowestValue() << endl;
	//the average of all the numbers in the array
	cout << "The Average of all the value is: " << myNumArray.findAverage() << endl;

	//print the sorted array
	cout << "The sorted array is: ";
	displayArr(myNumArray, SIZE);
	cout << endl;

	return 0;
}
//function that ask user the size of the array
int arraySize () {
	int arrSize;
	cout << "Enter the amount of elements for the array." << endl;
	cin >> arrSize;
	while (arrSize <= 0.0) {
		cout << "Invalid entry please try again." << endl;
		cin >> arrSize;
	}//end while
	return arrSize;
}
//function that stores the values entered from the user to the array
void storeValuesArray(NumArray& myNumArray, int SIZE) {
	float value;
	for (int i = 0; i < SIZE; i++) {
	cout << "Enter value #" << i + 1 << ": " << endl;
	cin >> value;
	myNumArray.setElement(i,value);
	}//end for
}
//funtion that displays the array
void displayArr(NumArray myNumArray, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		myNumArray.display(i);
	}//end for
}
