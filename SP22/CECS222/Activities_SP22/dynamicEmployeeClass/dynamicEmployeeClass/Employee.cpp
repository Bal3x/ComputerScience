#include<iostream>
#include<iomanip>
using namespace::std;
#include "Employee.h"

Employee::Employee() {
	char temp[30] = " ";
	setName(temp);
	setIdNumber(0);
	setDepartment(temp);
	setPosition(temp);
}
Employee::Employee(char* aName, int anIdNumber, char* aDepartment,
	char* aPosition) {
	setName(aName);
	setIdNumber(anIdNumber);
	setDepartment(aDepartment);
	setPosition(aPosition);
}
Employee::~Employee() {
	delete[] name;
	name = nullptr;
	delete[] position;
	position = nullptr;
	delete[] department;
	department = nullptr;
}
void Employee::setEmployee(char* aName, int anIdNumber, char
	* aDepartment, char* aPosition) {
	setName(aName);
	setIdNumber(anIdNumber);
	setDepartment(aDepartment);
	setPosition(aPosition);
}
void Employee::setName(char* aName) {
	name = new char[strlen(aName) + 1];
	strcpy_s(name, strlen(aName) + 1, aName);
}
void Employee::setIdNumber(int anIdNumber) {
	idNumber = anIdNumber;
}
void Employee::setDepartment(char* aDepartment) {
	department = new char[strlen(aDepartment) + 1];
	strcpy_s(department, strlen(aDepartment) + 1, aDepartment);
}
void Employee::setPosition(char* aPosition) {
	position = new char[strlen(aPosition) + 1];
	strcpy_s(position, strlen(aPosition) + 1, aPosition);
}
const char* Employee::getName() const {
	return name;
}
int Employee::getIdNumber() const {
	return idNumber;
}
const char* Employee::getDepartment() const {
	return department;
}
const char* Employee::getPosition() const {
	return position;
}
void Employee::display() const {
	cout << left << setw(15) << getName() << setw(8) << getIdNumber();
	cout << setw(15) << getDepartment() << setw(15) << position << endl;
}