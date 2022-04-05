#include <iostream>	
#include <cstring>
#include "ContactInfo.h"

using namespace::std;

ContactInfo::ContactInfo() {
	char tempname[20] = "Joe Rogan";
	char tempphone[20] = "000-000-0000";
	setName(tempname);
	setPhone(tempphone);
}
ContactInfo::ContactInfo(char* aName, char* aPhone) {
	setName(aName);
	setPhone(aPhone);
}
ContactInfo::~ContactInfo() {
	delete[] name;
	delete[] phone;
	name = nullptr;
	phone = nullptr;
}
//*************mutator member functions***********	
//this function initializes the name attribute.
void ContactInfo::setName(char* aName) {
	name = new char[strlen(aName) + 1];
	strcpy_s(name, strlen(aName) + 1, aName);
}
//this function initializes the phone attribute.
void ContactInfo::setPhone(char* aPhone) {
	phone = new char[strlen(aPhone) + 1];
	strcpy_s(phone, strlen(aPhone) + 1, aPhone);
}
//************accessor member functions***********
//function that returns the name attribute 
const char* ContactInfo::getName() const {
	return name;
}
//function that returns the phone attribute
const char* ContactInfo::getPhone() const {
	return phone;
}
//function that displays the contact information
void ContactInfo::display() const {
	cout << "Name: " << name << endl;
	cout << "Phone Number: " << phone << endl;
}

