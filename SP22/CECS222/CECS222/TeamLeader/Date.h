// Specification file for the Date class
#pragma once
#include <iostream>

using namespace::std;

class Date
{
private:
   int day;
   int month;
   int year;
public:
   // Default constructor
   Date() 
      { day = 1; month = 1; year = 1900; }

   // Constructor 
   Date(int d, int m, int y) 
      { day = d; month = m; year = y; }

   //Mutators
   void setDate(int m, int d, int y)
      { month = m; day = d; year = y; }
   // Accessors
   int getDay() const 
      { return day; }

   int getMonth() const
      { return month; }

   int getYear() const
      { return year; }
      
friend ostream& operator << (ostream& out, const Date& obj){
    out << obj.getMonth() << "/" << obj.getDay() << "/" << obj.getYear();
    return out;
}
friend istream& operator >> (istream& in, Date& obj){
    cout << "Enter month: " << endl;
    in >> obj.month;
    cout << "Enter day: " << endl;
    in >> obj.day;
    cout << "Enter Year: " << endl;
    in >> obj.year;
    
    return in;
}
};

