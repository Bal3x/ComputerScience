#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include <iostream>
#include<string>
using namespace::std;

class Employee {
private:
	char* name;
	int idNumber;
	char* department;
	char* position;
public:
	Employee();
	Employee(char* aName, int anIdNumber, char* aDepartment, char
		* aPosition);
	~Employee();
	void setEmployee(char* aName, int anIdNumber, char* aDepartment,
		char* aPosition);
	void setName(char* aName);
	void setIdNumber(int idNumber);
	void setDepartment(char* aDepartment);
	void setPosition(char* aPosition);
	const char* getName() const;
	int getIdNumber() const;
	const char* getDepartment() const;
	const char* getPosition() const;
	void display() const;
};
#endif
