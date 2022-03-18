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
	Lottery(int uNumbers[], int rNumbers[], int aSize);
	~Lottery();

	void setSize(int aSize);
	void setRandomNumbers(int rNumbers[], int aSize);
	void setUserNumbers(int uNumbers[], int aSize);
	
	void getRandomNumbers()const;
	void getUserNumbers() const;
	int getSize() const;

	void displayRandomArray() const;
	void displayUserArray() const;

	void compareNumbers(int matchedNumbers[], int &dSize) const;
    void removeDuplicates(int matchedNumbers[], int& dSize);

};
