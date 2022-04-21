#pragma once

#include <iostream>
using namespace::std;

const int MAX_CAPACITY = 5;
class Lottery {

private:
	int lottery[MAX_CAPACITY];
	int user[MAX_CAPACITY];
	int size;

public:
	Lottery();
	Lottery(const int aSize);
	~Lottery();

	void setSize(int aSize);
	void setRandomNumbers();
	void setUserNumbers();
	int getSize() const;

	void displayRandomArray() const;
	void displayUserArray() const;

	void compareArrays();
	int matchingDigits();
};
