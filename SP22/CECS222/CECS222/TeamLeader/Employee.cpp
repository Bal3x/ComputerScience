#include "Employee.h"
#include <string>
#include <iostream>

using namespace::std;

Employee::Employee()
{
    setEmployeeName(" ");
    setEmployeeNumber(0);
}
Employee::Employee(string aName, int aEmployeeNumber, int m, int d, int y)
{
    setEmployeeName(aName);
    setEmployeeNumber(aEmployeeNumber);
    hireDate.setDate(m, d, y);
}

Employee::~Employee()
{
}
void Employee::setEmployeeName(string aName)
{
    employeeName = aName;
}
void Employee::setEmployeeNumber(int aEmployeeNumber)
{
    employeeNumber = aEmployeeNumber;
}
string Employee::getEmployeeName() const
{
    return employeeName;
}
int Employee::getEmployeeNumber() const
{
    return employeeNumber;
}
void Employee::display() const
{
    cout << "Employee Name: " << employeeName << endl;
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Employee Hire date: " << hireDate.getMonth() << "/" << hireDate.getDay() << "/" << hireDate.getYear() << endl;
}