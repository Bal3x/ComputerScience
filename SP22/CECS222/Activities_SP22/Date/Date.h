#ifndef _DATE_H
#define _DATE_H
class Date{
private:
	int month, day, year;
public:
	//Constructores
	Date();
	Date(int aMonth, int aDay, int aYear);
	//Mutators
	void setMonth(int aMonth);
	void setDay(int aDay);
	void setYear(int aYear);
	//Accessor
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	//Funcion que imprime la fecha
	void displayDate() const;
};
#endif
