#include <iostream>
#include <iomanip>
#include "TestScores.h"

using namespace::std;

TestScores::TestScores(int aSize, std::string aName) {
	setSize(aSize);
	for (int index = 0; index < getSize(); index++) {
		scores[index] = 0;
	}
	// Setting Name
	setName(aName);
}
TestScores::TestScores(int myScores[], int aSize) {
	size = aSize;
	for (int index = 0; index < getSize(); index++) {
		scores[index] = myScores[index];
	}
}
TestScores::~TestScores() {
	cout << "Destruyendo el objeto del tipo TestScore\n";
	system("pause");
}
void TestScores::setScore(int aScore, int index) {
	scores[index] = aScore;
}
int TestScores::getScore(int index) const {
	return scores[index];
}
void TestScores::setSize(int aSize) {
	size = aSize;
}
int TestScores::getSize() const {
	return size;
}
double TestScores::getAverage() const {
	double avg;
	int sum = 0;
	for (int index = 0; index < getSize(); index++) {
		sum += getScore(index);
	}
	avg = (double)sum / getSize();
	return avg;
}

void TestScores::setName(std::string aName) {
	name = (aName);
}
string TestScores::getName() const {
	return name;
}
void TestScores::sortScores() {
	int seek;
	int count;
	int minValue;
	for (seek = 0; seek < (size - 1); seek++) {
		minValue = scores[seek];
		count = seek;
		for (int i = seek + 1; i < size; i++) {
			if (scores[i] < minValue) {
				minValue = scores[i];
				count = i;
			}
		}
		scores[count] = scores[seek];
		scores[seek] = minValue;
	}
}
void TestScores::displayLowScore() const {
	cout << "La peor nota del estudiante es: " << scores[0] << endl;
}
void TestScores::displayHighScore() const {
	cout << "La mejor nota del estudiante es: " << scores[size - 1] << endl;
}
void TestScores::displayArray() const {
	for (int i = 0; i < size; i++) {
		cout << scores[i] << " ";
	}
	cout << endl;
}
void TestScores::displayGrade() const {
	std::string grade;
	if (getAverage() >= 90.0 && getAverage() < 100.0)
		grade = 'A';
	else if (getAverage() <= 89.0 && getAverage() > 79.0)
		grade = 'B';
	else if (getAverage() <= 79.0 && getAverage() > 69.0)
		grade = 'C';
	else if (getAverage() <= 69.0 && getAverage() > 59.0)
		grade = 'D';
	else
		grade = 'F';
	cout << "La nota final del estudiante es: " << grade << endl;
}
void TestScores::display() const {
	cout << fixed << showpoint << setprecision(2);
	cout << "Las puntuaciones para " << getName() << " son: " << endl;
	for (int index = 0; index < getSize(); index++) {
		cout << "Score # " << index + 1 << ": " << getScore(index) << endl;
	}
	cout << "El promedio es: " << getAverage() << endl;
}