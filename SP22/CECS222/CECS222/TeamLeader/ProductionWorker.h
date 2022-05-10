#pragma once
#include "Employee.h"
#include <iostream>
#include <string>

using namespace::std;

class ProductionWorker : public Employee
{
protected:
    int shift;
    double payRate;
    
public:
    ProductionWorker();
    ProductionWorker(int aShift, double aPayRate, string aName, int aEmployeeNumber, int aMonth, int aDay, int aYear);
    ~ProductionWorker();
//Mutators
    void setShift(int aShift);
    void setPayRate(double aPayRate);
    
//Accessors
    int getShift() const;
    double getPayRate() const;

    void display() const;
};
