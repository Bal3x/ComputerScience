//Specification file for Employee class
#pragma once
#include <string>
#include "Date.h"

using namespace::std;

class Employee
{
protected:
    string employeeName;
    int employeeNumber;
    Date hireDate;
    
public:
    Employee();
    Employee(string aName, int aEmployeeNumber, int aMonth, int aDay, int aYear);
    ~Employee();
    
    //Mutators
    void setEmployeeName(string aName);
    void setEmployeeNumber(int employeeNumber);
    
    //Accessors
    string getEmployeeName() const;
    int getEmployeeNumber() const;
    
    void display() const;

};

