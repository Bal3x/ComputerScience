#include <iostream>
#include <cstring>
#include "Employee.h"
using namespace::std;


//contructors
Employee::Employee() {
	char tempEmp[20] = " ";
	setName(tempEmp);
	setIdNumber(0);
	setDepartment(tempEmp);
	setPosition(tempEmp);
}
Employee::Employee(char* aName, int aIdNumber, char* aDepartment, char* aPosition) {
	setName(aName);
	setIdNumber(aIdNumber);
	setDepartment(aDepartment);
	setPosition(aPosition);
}
//destructor
Employee::~Employee() {
	delete[] name;
	delete[] department;
	delete[] position;
	name = nullptr;
	department = nullptr;
	position = nullptr;
}

//****************mutator member functions***************************************************
//member function that initializes all attributes
void Employee::setEmployee(char* aName, int aIdNumber, char* aDepartment, char* aPosition) {
	setName(aName);
	setIdNumber(aIdNumber);
	setDepartment(aDepartment);
	setPosition(aPosition);
}
//member function that initializes the name attribute
void Employee::setName(char* aName) {
	name = new char[strlen(aName) + 1];
	strcpy_s(name, strlen(aName) + 1, aName);
}
//member funtion that initializes the idNumber attribute
void Employee::setIdNumber(int aIdNumber) {
	idNumber = aIdNumber;
}
//member function that initializes the department attribute
void Employee::setDepartment(char* aDepartment) {
	department = new char[strlen(aDepartment) + 1];
	strcpy_s(department, strlen(aDepartment) + 1, aDepartment);
}
//member function that initializes the position attribute
void Employee::setPosition(char* aPosition) {
	position = new char[strlen(aPosition) + 1];
	strcpy_s(position, strlen(aPosition) + 1, aPosition);
}
//***********accessors member functions********
//member function that returns name attribute
const char* Employee::getName() const {
	return name;
}
//member function that returns idNumber attribute
int Employee::getIdNumber() const {
	return idNumber;
}
//member function that returns derparment attribute
const char* Employee::getDepartment() const {
	return department;
}
//member function that returns position attribute
const char* Employee::getPosition() const {
	return position;
}
//member function that displays employee information
void Employee::display() const {
	cout << "Employee name: " << name << endl;
	cout << "Employee ID: " << idNumber << endl;
	cout << "Employee Department: " << department << endl;
	cout << "Employee Position: " << position << endl;
}

