//Student implementation file
#include "Student.h"
using namespace std;

Student::Student()
{
	setStudent(" ", 000, "CS", 80, "FA", 0);
}//end constructor

Student::Student(string name, int studentNumber, string course, int section, string trimester, bool status) : name(name), studentNumber(studentNumber), course(course), section(section), trimester(trimester), status(status) 
{
}//end constructor

void Student::setStudent(string name, int studentNumber, string course, int section, string trimester, bool status)
{
	name = name;
	studentNumber = studentNumber;
	course = course;
	section = section;
	trimester = trimester;
	status = status;
}//end setStudent

string Student::getName()
{
	return string(name);
}//end getName

int Student::getStudentNumber()
{
	return studentNumber;
}//end getStudentNumber

string Student::getCourse()
{
	return string(course);
}//end getCourse

int Student::getSection()
{
	return section;
}//end getSection

string Student::getTrimester()
{
	return string(trimester);
}//end getTrimester

bool Student::getStatus()
{
	return status;
}//end getStatus

ostream& operator<<(ostream& out, Student const& obj)
{
	out << "Student Name: " << obj.name << "\n";
	out << "Student Number: " << obj.studentNumber << "\n";
	out << "Student Course: " << obj.course << "\n";
	out << "Section: " << obj.section << "\n";
	out << "Trimester: " << obj.trimester << "\n";
	out << "Status: " << obj.status << "\n";

	return out;
}//end operator<<
istream& operator>>(istream& in, Student& obj)
{
	return in >> obj.name >> obj.studentNumber >> obj.course >> obj.section >> obj.trimester >> obj.status;
}//end operator>>
