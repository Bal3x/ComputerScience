#pragma once
#include <iostream>
#include <cstring>

using namespace::std;

const int MAX_AS = 30;
class TestScores{
    
private: 
    char* studentName[MAX_AS];
    double* testScores;
    int numTestScores;
    
public:
    //Constructor
    TestScores(double score, int numTestScores);
    //Copy Constructor
    TestScores(const TestScores& obj);
    //Destructor
    ~TestScores();
    
    //Mutators
    void setStudentName(char name);
    void setTestScore(double score);
    void setNumTestScore(int num);
    
    //Accessors
    char getStudentName() const;
    double getTestScore(int index) const;
    int getNumTestScore() const;
    
    //returns avg of test scores
    double testScoresAverage();
    
    //display test scores
    void display() const;
};

