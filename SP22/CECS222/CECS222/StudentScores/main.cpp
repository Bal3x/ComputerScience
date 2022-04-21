#include "StudentScores.h"
#include <iostream>
#include <string>

using namespace::std;

int main(){
    StudentTestScores std1("Jose", 3), std2("Luis", 4);
    double score;
    int index;
    //Entre las notas del primer estudiante
    cout << "Entre las " << std1.getNumTestScores() << " notas del estudiante " << std1.getStudentName() << ": " << endl;
    for (index = 0; index < std1.getNumTestScores(); index++){
        cin >> score;
        std1.setTestScore(score, index);
    }
    //Display las notas
    std1.display();
    //Entre las notas del segundo estudiante
    cout << "Entre las " << std2.getNumTestScores() << " notas del estudiante " << std2.getStudentName() << ": " << endl;
    for (index = 0; index < std2.getNumTestScores(); index++){
        cin >> score;
        std2.setTestScore(score, index);
    }
    std2.display();
    
    //Call copy constructor
    StudentTestScores std3(std1);
    
    //Display las notas
    std3.display();
    
    system("pause");
    
    return 0;
}

    

