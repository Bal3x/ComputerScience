#include "Date.h"
#include <iostream>
using namespace::std;

//Constructor
Date::Date()
{
    setMonth(1);
    setDay(1);
    setYear(2022);
}
//Overloaded Contructor
Date::Date(int m, int d, int y){
    setMonth(m);
    setDay(d);
    setYear(y);
}
//Copy Constructor
Date::Date(const Date& obj){
    setMonth(obj.getMonth());
    setDay(obj.getDay());
    setYear(obj.getYear());
}
//Destructor
Date::~Date()
{
}
//Mutators
Date& Date::setMonth(int m){
    if(m <= 12)
        this->month = m;
    else
        month = m % 12;
    return *this;
}
Date& Date::setDay(int d){
    this->day = d;
    return *this;
}
Date& Date::setYear(int y){
    this->year = y;
    return *this;
}
//Display
void Date::displayDate() const{
    cout << "The date entered is: " << this->getMonth() << "/" << this->getDay() << "/" << this->getYear() << endl;
}

ostream& operator << (ostream& strm, const Date& obj){
    strm << "Date " << endl;
    strm << "Month: " << obj.getMonth() << endl;
    strm << "Day: " << obj.getDay() << endl;
    strm << "Year: " << obj.getYear() << endl;
    
    return strm;
}
istream& operator >> (istream& strm, Date& obj){
    //Prompt user to enter values  
    cout << "Entre el mes: " << endl;
    strm >> obj.month;
    cout << "Entre el dia: " << endl;
    strm >> obj.day;
    cout << "Entre el ano: " << endl;
    strm >> obj.year;
    
    return strm;
}
