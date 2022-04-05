#pragma once
#include <iostream>

using namespace::std;

class NumArray {

private:
	float* array;
	int ArrSIZE;

public:
	//constructors
	NumArray();
	NumArray(int SIZE);
	NumArray(const NumArray &obj);
	//destructor
	~NumArray();
	//*****************Mutators member functions**************************
	//member function that sets the number of elements in the array
	void setElement(int numElem, float value);

	//*****************Accessors member functions**********************
	//member function that returns the number of elements in the array
	float getElement(int numElem) const;
	//member function that return the highest value of the array
	float findHighestValue();
	//member function that return the lowest value of the array 
	float findLowestValue();
	//member function that return the average of all numbers in the array
	float findAverage();
	//member function that sorts the array
	void bubbleSort();
	//member function tha displays the contents of the array
	void display(int n) const;
};