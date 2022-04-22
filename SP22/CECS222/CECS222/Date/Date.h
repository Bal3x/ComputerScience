#pragma once
#include <iostream>

using namespace::std;

class Date
{
private: 
    int month, day, year;
public:
    //Constructors
    Date();
    //Overloaded Constructor
    Date(int m, int d, int y);
    //Copy Constructor
    Date(const Date& obj);
    //Destructor
    ~Date();
    //Mutators (appliying this pointer)
    Date& setMonth(int m);
    Date& setDay(int d);
    Date& setYear(int y);
    
    //Accessors
    int getMonth() const{
        return month;
    }
    int getDay() const{
        return day;
    }
    int getYear() const{
        return year;
    }
    //display 
    void displayDate() const;
    
    //Overloading Operator
    friend ostream& operator << (ostream& strm, const Date& obj);
    friend istream& operator >> (istream& strm, Date& obj);
};

