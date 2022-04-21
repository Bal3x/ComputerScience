#pragma once

#include <iostream>
using namespace::std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores{
private:
    string studentName;
    double *testScores;
    int numTestScores;

public:    
    void createTestScoresArray(int size);
    //Constructor
    StudentTestScores(string name, int numScores);
    //Copy Constructor
    StudentTestScores(const StudentTestScores& obj);
    //Destructor
    ~StudentTestScores();
    //Mutators***************
    //Set Student name
    void setStudentName(string name);
    //Set Test Scores
    void setTestScore(double score, int index);
    //Accessors
    //get Student name
    string getStudentName() const;
    //get num Test Scores
    int getNumTestScores() const;
    //get Test Scores
    double getTestScore(int index) const;
    //Display scores
    void display() const;

};

