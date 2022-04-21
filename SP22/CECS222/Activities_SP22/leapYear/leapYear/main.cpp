#include <iostream>
#include "Date.h"

using namespace::std;

void menu();

int main() {
	int choice;
	int aDay, aMonth, aYear;
	Date date;

	do {
		//display Menu
		menu();

		cout << "\nEnter your choice " << endl;
		cin >> choice;
		while (choice > 2 && choice < 0) {
			cout << "Invalid Choice please try again:  " << endl;
			cin >> choice;
		}//end while

		switch (choice)
		{
		case 1:

			cout << "Enter Day: " << endl;
			cin >> aDay;
			cout << "Enter Month: " << endl;
			cin >> aMonth;
			cout << "Enter Year: " << endl;
			cin >> aYear;

			date.enterDate(aDay, aMonth, aYear);
		// validate date
			if (date.isValidDate())
				cout << "Is a valid date." << endl;
			else
				cout << "Invalid date please try again." << endl;
			// validate leap year
			if (date.isLeapYear())
				cout << "Is a Leap Year." << endl;
			else
				cout << "Is not a Leap Year." << endl;

			cout << endl;
			system("pause");
			
			break;
		case 2:
			cout << "Thank you!" << endl;
			system("pause");
			break;

		default: cout << "Invalid choice.";
			break;
		}
		system("cls");
	} while (choice != 2);
	
	
	return 0;
}

// menu
void menu() {
	cout << "\tDate\t" << endl;
	cout << "Option 1: Enter Date." << endl;
	cout << "Option 2: Exit." << endl;
}