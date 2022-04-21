#pragma once
#include <iostream>

using namespace::std;

class Date {
private:
	int day;
	int month;
	int year;


public:
	//Constructor & Destructor
	Date();
	Date(int aDay, int aMonth, int aYear);
	Date(const Date& date);
	~Date();

	//Mutators member functions
	void setDay(int aDay);
	void setMonth(int aMonth);
	void setYear(int aYear);

	//Accessors member functions
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void enterDate(int aDay, int aMonth, int aYear);



	bool isValidDate() const;
	bool isLeapYear() const;

	void displayDate() const;


};
