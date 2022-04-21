#include <iostream>
#include "StudentScores.h"

using namespace::std;

void StudentTestScores::createTestScoresArray(int size){
    numTestScores = size;
    testScores = new double[size];
    for (int i = 0; i < 0; i++){
        testScores[i] = DEFAULT_SCORE;
    }
}
//Constructor
StudentTestScores::StudentTestScores(string name, int numScores){
    studentName = name;
    createTestScoresArray(numScores);
}
//Copy Constructor
StudentTestScores::StudentTestScores(const StudentTestScores& obj){
    studentName = obj.getStudentName();
    numTestScores = obj.numTestScores;
    testScores = new double[numTestScores];
    for(int i = 0; i < obj.numTestScores; i++)
        testScores[i] = obj.testScores[i];
}
//Destructor
StudentTestScores::~StudentTestScores(){
    delete [] testScores;
}
//Mutators ***********************************************************
//set studentName
void StudentTestScores::setStudentName(string name){
    studentName = name;
}
//set testScore sets an specific test score value
void StudentTestScores::setTestScore(double score, int index){
    testScores[index] = score;
}
//get student name
string StudentTestScores::getStudentName() const{
    return studentName;
}
//get number of test scores
int StudentTestScores::getNumTestScores() const{
    return numTestScores;
}
//get Test scores
double StudentTestScores::getTestScore(int index) const{
    return testScores[index];
}
//display
void StudentTestScores::display() const{
    cout << "Las notas del estudiante  " << getStudentName() << " son: " << endl;
    for(int index = 0; index < getNumTestScores(); index++){
        cout << getTestScore(index) << ",";
    }
    cout << endl;
}
