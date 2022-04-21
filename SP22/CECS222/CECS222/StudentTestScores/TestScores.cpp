#include "TestScores.h"
#include <iostream>
#include <cstring>

using namespace::std;


//Constructor
TestScores::TestScores(double* score, int numTestScores){
    testScores = new double[numTestScores];
    for(int i = 0; i < numTesScores; i++){
        testScores[i] = score[i];
    }//end for
}
//Copy Constructor
TestScores::TestScores(const TestScores& obj){
    studentName = obj.getStudentName();
    numTestScores = obj.getNumTestScore();
    testScores = new double[obj.numTestScores];
    for(int i = 0; i < getNumTestScore(); i++){
        testScores[i] = obj.testScores[i];
    }
}
//Destructor
TestScores::~TestScores(){
    delete studentName;
    delete testScores;
    studentName = nullptr;
    testScores = nullptr;
}
    
//Mutators
void TestScores::setStudentName(char* name){
    studentName = new char[strlen(name) + 1];
    strcpy_s(studentName, strlen(name) + 1, name)
}
void TestScores::setTestScore(double score, int index){
    testScores[index] = score;
}
void TestScores::setNumTestScore(int num){
    numTestScores = num;
}
    
//Accessors
char getStudentName() const {
    return studentName;
}
double getTestScore(int index) const{
    return testScores[index];
}
    int getNumTestScore() const;
    
    //returns avg of test scores
    double testScoresAverage();
    
    //display test scores
    void display() const;