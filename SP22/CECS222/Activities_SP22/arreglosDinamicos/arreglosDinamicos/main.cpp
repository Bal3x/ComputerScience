#include <iostream>
using namespace::std;

void getArraySize(int& n);
float *createArray(int);
void getValues(float* myArray, int n);
void displayValues(float* myArray, int n);
void getHighest(float* myArray, int n, float *&highest);
void displayHighest(float* highest);


int main() {
	float* myArray = nullptr;
	float* highest = nullptr;
	int n;

	highest = new float;

	getArraySize(n);
	myArray = createArray(n);
	getValues(myArray, n);
	displayValues(myArray, n);
	getHighest(myArray, n, highest);
	displayHighest(highest);


	delete[] myArray;
	delete highest;

	myArray = nullptr;
	highest = nullptr;

	system("pause");

	return 0;
}//end main

void getArraySize(int &n) {
	cout << "Entre la cantidad de localidades de memoria dentro del arreglo: ";
	cin >> n;
}
float *createArray(int n) {
	float* myArray = nullptr;
	myArray = new float[n];
	return myArray;
}

void getValues(float* myArray, int n) {

	cout << "Entre los datos al arreglo: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "myArray[" << i << "] = ";
		cin >> *(myArray + i);
	}//end for
}
void displayValues(float *myArray, int n) {
	cout << "El contenido del arreglo: " << endl;
	for (int i = 0; i < n; i++) {
		cout << *(myArray + i) << endl;
	}//end for
}
void getHighest(float *myArray, int n, float *&highest) {
	int count;
	*highest = *(myArray + 0);
	for (count = 1; count < n; count++) {
		if (*(myArray + count) > *highest)
			*highest = *(myArray + count);
	}//end for

}
void displayHighest(float* highest) {
	
	cout << "El numero mayor del arreglo es: " << *highest << endl;
}


