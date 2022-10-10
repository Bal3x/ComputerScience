#pragma once

#include <iostream>
#include <string>

//Definition of Student class
class Student
{
	//Private members
private:
	std::string name;	//stores student name
	int studentNumber; //stores student id number
	std::string course;	//stores student course
	int section;	//stores student course section
	std::string trimester;	//stores trimester 
	bool status;	//stores student enrollment status

	//Public members
public:
	//Constructors
	Student();	//constructor
	Student(std::string name, int studentNumber, std::string course, int section, std::string trimester, bool status);	//parameter constructor
	//Mutator functions
	void setStudent(std::string name, int studentNumber, std::string course, int section, std::string trimester, bool status);
	//Access functions
	std::string getName();
	int getStudentNumber();
	std::string getCourse();
	int getSection();
	std::string getTrimester();
	bool getStatus();
	friend std::ostream& operator <<(std::ostream& out, Student const& obj);
	friend std::istream& operator >>(std::istream& in, Student& obj);

};//end class Student
