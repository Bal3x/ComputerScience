#pragma once
#include <iostream>
#include <string>
using namespace::std;

class Employee {
private:
	char* name;
	char* department;
	char* position;
	int idNumber;

public:
	//constructors and destructor
	Employee();
	Employee(char* aName, int aIdNumber, char* aDepartment, char* aPosition);
	~Employee();

	//********mutators member functions**********
	//member function that initializes all attributes
	void setEmployee(char* aName, int aIdNumber, char* aDepartment, char* aPosition);
	//member function that initializes the name attribute
	void setName(char* aName);
	//member funtion that initializes the idNumber attribute
	void setIdNumber(int aIdNumber);
	//member function that initializes the department attribute
	void setDepartment(char* aDeparment);
	//member function that initializes the position attribute
	void setPosition(char* aPosition);
	//***********accessors member functions********
	//member function that returns name attribute
	const char* getName() const;
	//member function that returns idNumber attribute
	int getIdNumber() const;
	//member function that returns derparment attribute
	const char* getDepartment() const;
	//member function that returns position attribute
	const char* getPosition() const;

	//member function that displays employee information
	void display() const;





};
