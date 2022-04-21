#ifndef TESTSCORES_H
#define TESTSCORES_H
#include <iostream>
using namespace ::std;

const int MAX_CAPACITY = 10;
class TestScores
{
private:
	int scores[MAX_CAPACITY];
	int size;
	std::string name;
public:
	TestScores(int aSize, std::string aName);
	TestScores(int aScores[], int aSize);
	~TestScores();

	void setScore(int aScore, int index);
	void setName(std::string aName);
	void setSize(int aSize);

	int getScore(int index) const;
	int getSize() const;
	double getAverage() const;
	std::string getName() const;

	void display() const;
	void displayArray() const;
	void displayLowScore() const;
	void displayHighScore() const;
	void displayGrade() const;

	void sortScores();

};
#endif 
