#pragma once

#include <iostream>
#include <string>

using namespace::std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee();    
    Employee(string aName, int anIdNumber, string aDeparment, string aPosition);
    ~Employee();
    
    
    void setEmployee(string aName, int anIdNumber, string aDepartment, string aPosition);
    void setName(string aName);
    void setIdNumber(int idNumber);
    void setDepartment(string aDepartment);
    void setPosition(string aPosition);
    
    string getName() const;
    int getIdNumber() const;
    string getDepartment() const;
    string getPosition() const;
    
    void display() const;
    
};

