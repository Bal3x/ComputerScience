#include <iostream>
#include <stdlib.h>
#include "Lottery.h"

using namespace::std;
//Constructor and Destructor
Lottery::Lottery() {
	//set user and lottery to 0
	for (int i = 0; i < getSize(); i++) {
		user[i] = 0;
		lottery[i] = 0;
	}
}
Lottery::Lottery(int uNumbers[], int rNumbers[], int aSize) {
	setSize(aSize);
	setRandomNumbers(rNumbers, aSize);
	setUserNumbers(uNumbers, aSize);
}
Lottery::~Lottery() {
	cout << "Destructor has been invoked" << endl;
}

// Mutators**********************************************
void Lottery::setRandomNumbers(int rNumbers[], int aSize) {
	//providing seed value
	srand((unsigned)time(NULL));
	for (int i = 0; i < aSize; i++) {
		rNumbers[i] = 0 + (rand() % 10);
        lottery[i] = rNumbers[i];
	}
}
void Lottery::setUserNumbers(int uNumbers[], int aSize) {
	cout << "Enter five digits between 0 and 9." << endl;
	for (int i = 0; i < aSize; i++) {
		cout << "Enter digit " << i + 1 << ":\t" << endl;
		cin >> user[i];
        uNumbers[i] = user[i];
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
void Lottery::compareNumbers(int matchedNumbers[], int &dSize) const {
	int i, j;
	int sameDigits = 0;
	for (i = 0; i < getSize(); i++) 
    {
		for (j = 0; j < getSize(); j++) 
        {
			if (lottery[i] == user[j])
            { 
                matchedNumbers[i] = lottery[i];
                sameDigits++;
            }
		}
	}
//    dSize = sizeof(matchedNumbers);
	cout << "\nNumber of digits matched: " << sameDigits << endl;
}
//void Lottery::removeDuplicates(int matchedNumbers[], int& dSize){
//    for(int i = 0; i < dSize; ++i)
//    {
//        int temp[dSize
//        for(int j = 0; j < i; ++j)
//        {
//            if(temp[j] == temp[i])
//            {
//                noDupe = false;
//                break;
//            }
//        }
//        if(noDupe)
//        {
//            temp[i] = matchedNumbers[i];
//        }
//    }
//        
//}
