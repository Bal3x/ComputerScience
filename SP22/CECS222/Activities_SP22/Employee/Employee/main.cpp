#include <iostream>
#include "Employee.h"

using namespace::std;

//prototypes
void getDataEmployee(Employee*, int);
void displayEmployeeData(Employee*, int);

int main() {
	
	Employee* EmployeeArray;
	int n;

	//ask user for the amount of employees that are goint to be added to the array
	cout << "Enter the amount of employees: " << endl;
	cin >> n;
	//dynamically allocate memory to EmployeeArray object
	EmployeeArray = new Employee[n];
	getDataEmployee(EmployeeArray, n);
	displayEmployeeData(EmployeeArray, n);

	return 0;
}
void getDataEmployee(Employee* EmployeeArray, int n) {
	const int SIZE = 20;
	char aName[SIZE], aPosition[SIZE], aDepartment[SIZE];
	int aIdNumber;

	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Enter the name of the employee: " << endl;
		cin.getline(aName, SIZE);
		cout << "Enter the ID number of the employee: " << endl;
		cin >> aIdNumber;
		cin.ignore();
		cout << "Enter the department of the employee: " << endl;
		cin.getline(aDepartment, SIZE);
		cin.ignore();
		cout << "Enter the position of the employee: " << endl;
		cin.getline(aPosition, SIZE);
		//create instance of employee
		EmployeeArray[i].setEmployee(aName, aIdNumber, aDepartment, aPosition);
	}//end for
}
void displayEmployeeData(Employee* EmployeeArray, int n) {
	for (int i = 0; i < n; i++) {
		EmployeeArray[i].display();
		cout << endl;
	}//end for
}