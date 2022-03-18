
#include<iostream>
using namespace::std;
#include "Date.h"

int main(){
	Date date1, date2(8,12,2020),date3;
	int aDay, aMonth, aYear;

	cout << "Fecha 1:";
	date1.displayDate();
	cout << "Fecha 2:";
	date2.displayDate();
	cout << "Fecha 3:";
	date3.displayDate();
	cout << "Entre el dia";
	cin >> aDay;
	date3.setDay(aDay);
	cout << "Entre el mes:";
	cin >> aMonth;
	date3.setMonth(aMonth);
	cout << "Entre el ano:";
	cin >> aYear;
	date3.setYear(aYear);
	cout << "Fecha 3:";
	date3.displayDate();
	system("pause");
	return 0;
}//end main