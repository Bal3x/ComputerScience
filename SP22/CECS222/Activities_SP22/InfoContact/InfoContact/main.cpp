#include <iostream>
#include "ContactInfo.h"

using namespace::std;

int main() {
	const int SIZE = 15;
	//create pointer variables and initialize to nullptr
	char* aName = nullptr;
	char* aPhone = nullptr;
	//allocate dynamic memory for aName
	aName = new char[SIZE];
	//allocate dynamic memory for aPhone
	aPhone = new char[SIZE];

	//create class object to trigger no parameter constructor
	ContactInfo info;

	//ask for user's name
	cout << "Enter your name." << endl;
	cin.getline(aName, SIZE);
	//ask for user's phone number
	cout << "Enter your phone number." << endl;
	cin.getline(aPhone, SIZE);

	//create class object 
	ContactInfo myInfo(aName, aPhone);
	myInfo.display();












	return 0;
}