#pragma once
#include <iostream>
using namespace::std;

class ContactInfo {
private:
	char* name;
	char* phone;

public:
	//constructors
	ContactInfo();
	ContactInfo(char* aName, char* aPhone);
	//destructor
	~ContactInfo();
	//*************mutator member functions***********	
	//this function initializes the name attribute.
	void setName(char* aName);
	//this function initializes the phone attribute.
	void setPhone(char* aPhone);
	//************accessor member functions***********
	//function that returns the name attribute 
	const char* getName() const;
	//function that returns the phone attribute
	const char* getPhone() const;

	//function that displays the contact info
	void display() const;

};
