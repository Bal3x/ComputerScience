#include "ProductionWorker.h"
#include "Employee.h"
#include <iostream>
#include <string>

using namespace::std;

ProductionWorker::ProductionWorker() : Employee()
{
    setShift(1);
    setPayRate(0.0);
}
ProductionWorker::ProductionWorker(int aShift, double aPayRate, string aName, int aEmployeeNumber, int aMonth, int aDay, int aYear) : Employee(aName, aEmployeeNumber, aMonth, aDay, aYear)
{
    setShift(aShift);
    setPayRate(aPayRate);
}
ProductionWorker::~ProductionWorker()
{
}
//Mutators
void ProductionWorker::setShift(int aShift)
{
    shift = aShift;
}
void ProductionWorker::setPayRate(double aPayRate)
{
    payRate = aPayRate;
}
    
//Accessors
int ProductionWorker::getShift() const
{
    return shift;
}
double ProductionWorker::getPayRate() const
{
    return payRate;
}
    
void ProductionWorker::display() const
{
    cout << "Production Worker shift: " << getShift() << endl;
    cout << "Production Worker payRate: " << getPayRate() << endl;
}    


