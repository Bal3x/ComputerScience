#include<iostream>
using namespace::std;
#include "Date.h"

Date::Date() {
	month = 8;
	day = 11;
	year = 2020;
}
Date::Date(int aMonth, int aDay, int aYear) {
	setMonth(aMonth);
	setDay(aDay);
	setYear(aYear);
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
void Date::displayDate() const {
	cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
