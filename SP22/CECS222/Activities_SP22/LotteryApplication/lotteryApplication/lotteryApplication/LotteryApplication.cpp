#include <iostream>
#include <cstdlib>
#include "LotteryApplication.h"

using namespace::std;
//Constructor and Destructor
Lottery::Lottery() {
	setSize(5);
	//set lottery and user to 0
	for (int i = 0; i < getSize(); i++) {
		lottery[i] = 0;
		user[i] = 0;
	}//end for

}
Lottery::Lottery(const int aSize) {
	setSize(aSize);
	setRandomNumbers();
	setUserNumbers();
}
Lottery::~Lottery() {
	cout << "\nDestructor has been invoked" << endl;
}

// Mutators**********************************************
void Lottery::setRandomNumbers() {
	const int MinValue = 0;
	const int MaxValue = 10;
	//get the system time and seed the random generator
	unsigned seed = time(0);
	srand(seed);

	for (int i = 0; i < getSize(); i++) {
		lottery[i] = (rand() % (MaxValue - MinValue + 1)) + MinValue;
	}//end for
}
void Lottery::setUserNumbers() {
	cout << "Enter " << getSize() << " digits between 0 and 9." << endl;
	for (int i = 0; i < getSize(); i++) {
		cout << "Enter digit " << i + 1 << ":\t" << endl;
		cin >> user[i];
	}//end for
}
void Lottery::setSize(int aSize) {
	while (aSize > 5) {
		cout << "Invalid size please try again with digits between 1 and 5." << endl;
		cin >> aSize;
	}
		size = aSize;
}

// Accessors*********************************************
int Lottery::getSize() const {
	return size;
}
//display************************************************
void Lottery::displayRandomArray() const {
	cout << "The Lottery Numbers are:\n";
	for (int i = 0; i < getSize(); i++) {
		cout << lottery[i] << " ";
	}//end for
	cout << endl;
}
void Lottery::displayUserArray() const {
	cout << "The user's numbers are:\n";
	for (int i = 0; i < getSize(); i++) {
		cout << user[i] << " ";
	}//end for
	cout << endl;
}
//compare arrays*****************************************
void Lottery::compareArrays() {
	if (matchingDigits() == 5) {
	cout << "The number of matching digits is: " << matchingDigits() << endl;
	cout << "You are the Grand Prize Winner!!" << endl;
	}//end if
	else
		cout << "\nThe number of matching digits is: " << matchingDigits() << endl;
}
int Lottery::matchingDigits() {
	int matchDigits = 0;
	for (int i = 0; i < getSize(); i++) {
		for (int j = 0; j < getSize(); j++) {
			if (user[i] == lottery[j])
				matchDigits++;
		}//end if
	}//end for
	return matchDigits;
}
