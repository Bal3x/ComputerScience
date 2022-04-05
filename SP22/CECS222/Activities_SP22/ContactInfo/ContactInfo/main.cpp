#include<iostream>
#include<string>
using namespace::std;
#include "ContactInfo.h"

int main() {

	char tempName[20] = "Brian Rosado";
	char tempPhone[20] = "787-890-8909";

	ContactInfo std1(tempName, tempPhone), std2;

	char* name = nullptr;
	char* phoneNumber = nullptr;
	const int SIZE = 15;
	name = new char[SIZE];
	phoneNumber = new char[SIZE];

	std1.display();
	std2.display();
	cout << "Entre su nombre:";
	cin.getline(name, SIZE);
	cout << "Entre su numero de telefono:";
	cin.getline(phoneNumber, SIZE);
	std2.setName(name);
	std2.setPhone(phoneNumber);
	std2.display();


	delete[] name;
	name = nullptr;
	delete[] phoneNumber;
	phoneNumber = nullptr;
	system("pause");

	return 0;
}//end main

