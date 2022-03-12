#include <iostream>
#include <stdlib.h>
#include "LotteryApplication.h"

using namespace::std;
//Constructor and Destructor
Lottery::Lottery() {
	//set user and lottery to 0
	for (int i = 0; i < getSize(); i++) {
		user[i] = 0;
		lottery[i] = 0;
	}
}
Lottery::Lottery(int aSize) {
	setSize(aSize);
	setRandomNumbers(aSize);
	setUserNumbers(aSize);
}
Lottery::~Lottery() {
	cout << "Destructor has been invoked" << endl;
}

// Mutators**********************************************
void Lottery::setRandomNumbers(int aSize) {
	//providing seed value
	srand((unsigned)time(NULL));
	for (int i = 0; i < aSize; i++) {
		lottery[i] = 0 + (rand() % 10);
	}
}
void Lottery::setUserNumbers(int aSize) {
	cout << "Enter five digits between 0 and 9." << endl;
	for (int i = 0; i < aSize; i++) {
		cout << "Enter digit " << i + 1 << ":\t" << endl;
		cin >> user[i];
	}
}
void Lottery::setSize(int aSize) {
	size = aSize;
}

// Accessors*********************************************
int Lottery::getSize() const {
	return size;
}
void Lottery::getRandomNumbers() const {

}
void Lottery::getUserNumbers() const {

}

//display************************************************
void Lottery::displayRandomArray() const {
	cout << "The Lottery Numbers are:\n";
	for (int i = 0; i < size; i++) {
		cout << lottery[i] << " ";
	}
	cout << endl;
}
void Lottery::displayUserArray() const {
	cout << "The user's numbers are:\n";
	for (int i = 0; i < size; i++) {
		cout << user[i] << " ";
	}
	cout << endl;
}
//compare arrays*****************************************
void Lottery::compareNumbers() const {
	int i, j;
	int sameDigits = 0;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (lottery[i] == user[j]) 
				sameDigits++;
		}
	}
	cout << "\nNumber of digits matched: " << sameDigits << endl;
}

