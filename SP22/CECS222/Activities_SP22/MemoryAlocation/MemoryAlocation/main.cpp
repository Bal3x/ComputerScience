#include <iostream>
using namespace::std;

int* getWidth();
int* getLength();
int* getArea(int *, int *);
void display(int* width, int* length, int* area);

int main() {
	// This program asks the user to enter the length and width of 
	// a rectangle. It calculates the rectangle's area and displays 
	// the value on the screen. 
	 int *length = nullptr, *width = nullptr, *area = nullptr;

	 //crear la memoria dinamica
	 cout << "This program calculates the area of a ";
	 cout << "rectangle.\n";
	 width = getWidth();
	 length = getLength();
	 area = getArea(width, length);
	 display(width, length, area);

	 delete length;
	 delete width;
	 delete area;

	return 0;
}
int* getWidth() {
	int* width = nullptr;
	width = new int;
	cout << "What is the width of the rectangle? ";
	cin >> *width;
	return width;
}
int* getLength() {
	int* length = nullptr;
	length = new int;
	cout << "What is the length of the rectangle? ";
	cin >> *length;
	
	return length;
}

int* getArea(int* width, int* length) {
	int* area = nullptr;
	area = new int;
	*area = (*length) * (*width);
	return area;
}
void display(int* width, int* length, int* area) {
	cout << "Width: " << *width << endl;
	cout << "Length: " << *length << endl;
	cout << "The area of the rectangle is: " << *area << ".\n";
}


