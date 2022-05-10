// Specification file for the Date class
#pragma once

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
};

