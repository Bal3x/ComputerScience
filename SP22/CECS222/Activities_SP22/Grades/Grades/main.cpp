#include <iostream>
#include <string>

using namespace::std;

// prototipos
void displayMenu();
void addGrade(int [], int&);
void viewGrades(int [], int&);
void viewAverage(int [], int &);
double calculateAverage(int [], int &);
void exitProgram();

int main() {

	//variables
		int option;
		int grades[10];
		int numG = 0;

	do {
		// Display menu
		displayMenu();

		cout << "\nEnter your Option  from 1-5" << endl;
		cin >> option;
		switch (option)
		{
		case 1: addGrade(grades, numG);
			break;
		case 2: viewGrades(grades, numG);
			break;
		case 3: viewAverage(grades, numG);
			break;
		case 4: exitProgram();
			break;
		default:cout << "Invalid";
			break;
		}
		system("cls");

	} while (option != 4);

	return 0;
}

void displayMenu() {
	cout << "****************\n";
	cout << "\tMENU\t \n";
	cout << "****************\n";
	cout << "Option 1: Add grade.\n";
	cout << "Option 2: View previous grades.\n";
	cout << "Option 3: View average grade.\n";
	cout << "Option 4: Exit the program.\n";
}
void addGrade(int grades[], int &numG) {
	//Variables
	int aScore;

	cout << "You selected Add Grade\n";
	cout << "Enter the amount of grades to add.\n";
	cin >> numG;
	while (numG > 10) {
		cout << "Invalid entry please try again. 1 - 10.";
		cin >> numG;
	}

	for (int i = 0; i < numG; i++) {
		cout << "Enter score # " << i + 1 << ": ";
		cin >> aScore;
		//validate aScore
		while (aScore < 0 || aScore > 100) {
			cout << "Invalid entry please try again." << endl;
			cin >> aScore;
		}
		grades[i] = aScore;
	}
	cout << endl;
	system("pause");

}
void viewGrades(int grades[], int &numG) {
	cout << "You selected View Grades" << endl;
	cout << "Grades: " << endl;
	for (int i = 0; i < numG; i++) {
		cout << grades[i] << " ";
	}
	cout << endl;
	system("pause");

}
void viewAverage(int grades[], int &numG) {
	cout << "The average score is: " << calculateAverage(grades, numG) << endl;
	system("pause");
}
double calculateAverage(int grades[], int& numG) {
	double avg;
	int sum = 0;
	for (int i = 0; i < numG; i++) {
		sum += grades[i];
	}
	avg = (double)sum / numG;
	return avg;

}
void exitProgram() {
	cout << "Thank you!" << endl;
	system("pause");
}