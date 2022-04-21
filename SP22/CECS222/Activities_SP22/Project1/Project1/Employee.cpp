#include<iostream>
#include<iomanip>
using namespace::std;
#include "Employee.h"
Employee::Employee() {
	setName(" ");
	setIdNumber(0);
	setDepartment(" ");
	setPosition(" ");
}
Employee::Employee(string aName, int anIdNumber, string aDepartment, string aPosition) {
	setName(aName);
	setIdNumber(anIdNumber);
	setDepartment(aDepartment);
	setPosition(aPosition);
}
void Employee::setEmployee(string aName, int anIdNumber, string aDepartment,
	string aPosition) {
	setName(aName);
	setIdNumber(anIdNumber);
	setDepartment(aDepartment);
	setPosition(aPosition);
}
void Employee::setName(string aName) {
	name = aName;
}
void Employee::setIdNumber(int anIdNumber) {
	idNumber = anIdNumber;
}
void Employee::setDepartment(string aDepartment) {
	department = aDepartment;
}
void Employee::setPosition(string aPosition) {
	position = aPosition;
}
string Employee::getName() const {
	return name;
}
int Employee::getIdNumber() const {
	return idNumber;
}
string Employee::getDepartment() const {
	return department;
}
string Employee::getPosition() const {
	return position;
}
void Employee::display() const {
	cout << left << setw(15) << getName() << setw(8) << getIdNumber();
	cout << setw(15) << getDepartment() << setw(15) << getPosition() << endl;
}
void getDataEmployee(Employee myArrayOfEmployee[], int n) {
	string name, position, department;
	int idNumber;

	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Entre el nombre del empleado:";
		getline(cin, name, '\n');
		cout << "Entre el Id del Empleado:";
		cin >> idNumber;
		cin.ignore();
		cout << "Entre el departemento del empleado:";
		getline(cin, department, '\n');
		cout << "Entre  la posicion del empleado:";
		//cin.ignore();
		getline(cin, position, '\n');
		myArrayOfEmployee[i].setEmployee(name, idNumber, department, position);
	}//end for
}
void displayDataEmployee(Employee myArrayOfEmployee[], int n) {
	cout << "Name  ID Number Department Position\n";
	for (int i = 0; i < n; i++) {
		myArrayOfEmployee[i].display();
	}//end for
}