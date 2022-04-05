#include <iostream>
using namespace::std;
//prototypes
int* createArray(int);
void getValues(int*, int);
void display(int*, int);


int main() {
	int* array = nullptr;
	int n;

	//ask user for the amount of elements in the array
	cout << "Enter the amount of elements in the array: " << endl;
	cin >> n;

	//create the array
	array = createArray(n);
	//ask user to enter the values for the array
	getValues(array, n);
	//display the values of the array
	display(array, n);

	// free memory allocation
	delete[] array;
	array = nullptr;

	return 0;
}// end main

//function that creates a dynamic array
int* createArray(int n) {
	int* array = nullptr;
	//dynamically allocate memory for array of int[n]
	array = new int[n];

	return array;
}
//function that ask user to enter the values for the array
void getValues(int* array, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Enter the value for the element number " << i + 1 << " : " << endl;
		cin >> *(array + i);
	}//end for
}
//function that displays elements of the array
void display(int* array, int n) {
	for (int i = 0; i < n; i++) {
		cout << "The value for element " << i + 1 << " is: " << *(array + i) << endl;
	}//end for
	cout << endl;
}