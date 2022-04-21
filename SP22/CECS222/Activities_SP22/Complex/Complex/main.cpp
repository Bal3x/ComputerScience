#include <iostream>
#include "Complex.h"
using namespace::std;

//prototypes
void displayMenu();
void setNumbers(Complex, Complex);

int main() {
	Complex Num1, Num2, result;
	int choice;

	do {
		//display menu
		displayMenu();
		cin >> choice;
		while (choice > 4 || choice < 0) {
			cout << "Invalid choice, please try again." << endl;
			cin >> choice;
		}
		switch (choice){
		case 1: 
			//add two complex numbers
			setNumbers(Num1, Num2);
			result.addComplexNum(Num1, Num2);
			result.display();

			break;
		case 2:
			setNumbers(Num1, Num2);
			result.substractComplexNum(Num1, Num2);
			result.display();

			break;
		case 3:
			setNumbers(Num1, Num2);
			result.multiplyComplexNum(Num1, Num2);
			result.display();

			break;
		case 4:
			cout << "Thank you!";

			break;
		default:
			break;
		}

	} while (choice != 4);


	return 0;
}

void displayMenu() {
 cout << "\n MENU\n";
 cout << "-----------------------------------------\n";
 cout << "1) Add two complex numbers\n";
 cout << "2) Subtract two complex numbers\n";
 cout << "3) Multiply two complex numbers\n";
 cout << "4) Exit\n";
}

void setNumbers(Complex Num1, Complex Num2) {
	int aReal1;
	int aImag1;
	int aReal2;
	int aImag2;
	
	cout << "Enter Real Part for number 1: " << endl;
	cin >> aReal1;
	cout << "Enter Imaginary Part for number 1: " << endl;
	cin >> aImag1;
	Num1.setReal(aReal1);
	Num1.setImg(aImag1);

	cout << "Enter Real Part for number 2: " << endl;
	cin >> aReal2;
	cout << "Enter Imaginary Part for number 2: " << endl;
	cin >> aImag2;
	Num2.setReal(aReal2);
	Num2.setImg(aImag2);
}
//void operator + (Complex& Num1) {
//	result = 


//}

