#include "TeamLeader.h"
#include "ProductionWorker.h"
#include <iostream>
#include <string>

using namespace::std;

TeamLeader::TeamLeader() : ProductionWorker()
{
    setMonthyBonus(0.0);
    setRequiredTrainingHours(0);
    setLeaderTrainingHours(0);
}
TeamLeader::TeamLeader(double aMBA, int aRTH, int aLTH, int aShift, double aPayRate, string aName, int aEmployeeNumber, int aMonth, int aDay, int aYear) : ProductionWorker(aShift, aPayRate, aName, aEmployeeNumber, aMonth, aDay, aYear)
{
    setMonthyBonus(aMBA);
    setRequiredTrainingHours(aRTH);
    setLeaderTrainingHours(aLTH);
}
TeamLeader::~TeamLeader()
{
}

void TeamLeader::setMonthyBonus(double aMBA)
{
    monthlyBonusAmount = aMBA;
}
void TeamLeader::setRequiredTrainingHours(int aRTH)
{
    requiredTrainingHours = aRTH;
}
void TeamLeader::setLeaderTrainingHours(int aLTH)
{
    leaderTrainingHours = aLTH;
}

double TeamLeader::getMonthlyBonusAmount() const
{
    return monthlyBonusAmount;
}
int TeamLeader::getRequiredTrainingHours() const
{
    return requiredTrainingHours;
}
int TeamLeader::getLeaderTrainingHours() const
{
    return leaderTrainingHours;
}

ostream& operator << (ostream& out, const TeamLeader& obj)
{
    out << "Employee name: " << obj.employeeName << endl;
    out << "Employee Number: " << obj.employeeNumber << endl;
    out << "Employee Hire Date: " << obj.hireDate << endl;
    out << "Employee Shift: " << obj.payRate << endl;
    out << "Team Leader Monthly Bonus: " << obj.monthlyBonusAmount << endl;
    out << "Team Leader Required Training Hours : " << obj.requiredTrainingHours << endl;
    out << "Team Leader Training Hours: " << obj.leaderTrainingHours << endl;
    
    return out;
    
}
istream& operator >> (istream& in, TeamLeader& obj)
{
    cout << "Enter Employee Name:  " << endl;
    getline(in, obj.employeeName);
    cout << "Enter Employee Number: " << endl;
    in >> obj.employeeNumber;
    cout << "Enter Employee hire date: " << endl;
    in >> obj.hireDate;
    cout << "Enter Employee Shift: " << endl;    
    in >> obj.shift;
    cout << "Enter Employee PayRate: " << endl;
    in >> obj.payRate;
    cout << "Enter Team Leader Monthly Bonus: " << endl;
    in >> obj.monthlyBonusAmount;
    cout << "Enter Team Leader Required Training Hours: " << endl;
    in >> obj.requiredTrainingHours;
    cout << "Enter Team Leader Training Hours: " << endl;
    in >> obj.leaderTrainingHours;
    
    return in;
}
