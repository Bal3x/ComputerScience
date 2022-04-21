#include <iostream>	
#include "Date.h"

using namespace::std;

Date::Date() {
	month = 1;
	day = 1;
	year = 2022;
}
Date::Date(int aDay, int aMonth,int aYear) {
	day = aDay;
	month = aMonth;
	year = aYear;
}
//copy constructor
Date::Date(const Date &date) {
	day = date.day;
	month = date.month;
	year = date.year;
}
Date::~Date() {

}
//Mutators
void Date::setMonth(int aMonth) {
	month = aMonth;
}
void Date::setDay(int aDay) {
	day = aDay;
}
void Date::setYear(int aYear) {
	year = aYear;
}
//Accessor
int Date::getMonth() const {
	return month;
}
int Date::getDay() const {
	return day;
}
int Date::getYear() const {
	return year;
}
void Date::enterDate(int aDay, int aMonth, int aYear) {
	setDay(aDay);
	setMonth(aMonth);
	setYear(aYear);
}
// validate date
bool Date::isValidDate() const {

	const int months[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (!(month >= 1 && month <= 12))
		return false;
	else if (!(day >= 1 && day <= months[month - 1]))
		return false;
	else if (!(year >= 1950))
		return false;
	return true;
}
// validate leap year
bool Date::isLeapYear() const {
	return (((getYear() % 4 == 0) && (getYear() % 100 != 0)) || (getYear() % 400 == 0));
}
//display date 
void Date::displayDate() const {
	cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
