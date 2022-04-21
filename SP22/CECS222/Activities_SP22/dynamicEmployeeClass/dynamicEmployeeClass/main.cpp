#include<iostream>
#include<string>
using namespace::std;
#include"Employee.h"

void getDataEmployee(Employee* myArrayOfEmployee, int n);
void displayDataEmployee(Employee* myArrayOfEmployee, int n);

int main() {
	Employee* myArrayOfEmployee;
	int n;
	cout << "Entre la cantidad de Empleados:";
	cin >> n;
	myArrayOfEmployee = new Employee[n];
	getDataEmployee(myArrayOfEmployee, n);
	displayDataEmployee(myArrayOfEmployee, n);
	delete[] myArrayOfEmployee;
	myArrayOfEmployee = nullptr;
	system("pause");
	return 0;
}//end main

void getDataEmployee(Employee* myArrayOfEmployee, int n) {
	const int SIZE = 20;
	char name[SIZE], position[SIZE], department[SIZE];
	int idNumber;
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Entre el nombre del empleado:";
		cin.getline(name, SIZE);
		cout << "Entre el Id del Empleado:";
		cin >> idNumber;
		cin.ignore();
		cout << "Entre el departemento del empleado:";
		cin.getline(department, SIZE);
		cout << "Entre la posicion del empleado:";
		cin.ignore();
		cin.getline(position, SIZE);
		myArrayOfEmployee[i].setEmployee(name, idNumber, department,
			position);
	}//end for
}
void displayDataEmployee(Employee* myArrayOfEmployee, int n) {
	cout << "Name ID Number Department Position\n";
	for (int i = 0; i < n; i++) {
		myArrayOfEmployee[i].display();
	}//end for
}