#pragma once
#include "ProductionWorker.h"
#include <iostream>
#include <string>

using namespace::std;

class TeamLeader : public ProductionWorker
{
private:
    double monthlyBonusAmount;
    int requiredTrainingHours;
    int leaderTrainingHours;
public:
    TeamLeader();
    TeamLeader(double aMBA, int aRTH, int aLTH, int aShift, double aPayRate, string aName, int aEmployeeNumber, int aMonth, int aDay, int aYear);
    ~TeamLeader();
    
    //Mutators
    void setMonthyBonus(double aMBA);
    void setRequiredTrainingHours(int aRTH);
    void setLeaderTrainingHours(int aLTH);
    
    //Accessors
    double getMonthlyBonusAmount() const;
    int getRequiredTrainingHours() const;
    int getLeaderTrainingHours() const;
    
    friend ostream& operator << (ostream& out, const TeamLeader& obj);
    friend istream& operator >> (istream& in, TeamLeader& obj);

};

