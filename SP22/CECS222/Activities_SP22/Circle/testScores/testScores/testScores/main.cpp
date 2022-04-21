#include <iostream>
#include <iomanip>
#include "TestScores.h"
#include <string>

using namespace::std;

int main() {
	int n;
	int index;
	int aScore;
	string sName;

	cout << "Entre el nombre del estudiante:\n";
	getline(cin, sName);
	cout << "Entre la cantidad de puntuaciones del curso\n";
	cin >> n;
	
	TestScores myGrades(n, sName);
	for (int index = 0; index < myGrades.getSize(); index++) {
		cout << "Score # " << index + 1 << ": ";
		cin >> aScore;
		myGrades.setScore(aScore, index);
	}
	myGrades.display();
	myGrades.sortScores();
	myGrades.displayHighScore();
	myGrades.displayLowScore();
	myGrades.displayGrade();
	system("pause");
	
	return 0;

}