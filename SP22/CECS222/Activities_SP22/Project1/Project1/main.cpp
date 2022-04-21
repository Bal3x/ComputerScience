#include<iostream>
#include<string>
using namespace::std;
#include"Employee.h"
void getDataEmployee(Employee myArrayOfEmployee[], int n);
void displayDataEmployee(Employee myArrayOfEmployee[], int n);
int main() {
    const int SIZE = 10;
    Employee myArrayOfEmployee[SIZE];
    int n;

    cout << "Entre la cantidad de Empleados< 10:";
    cin >> n;
    getDataEmployee(myArrayOfEmployee, n);
    displayDataEmployee(myArrayOfEmployee, n);
    system("pause");
    return 0;
}