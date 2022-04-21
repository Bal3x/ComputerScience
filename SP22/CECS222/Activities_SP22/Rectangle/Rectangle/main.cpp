#include <iostream>
using namespace::std;
#include "Rectangle.h"
int main()
{
	Rectangle box1; // Define an instance of the Rectangle class
	double rectWidth; // Local variable for width
	double rectLength; // Local variable for length
	//Imprime los valores constantes del objeto box1
	cout << "\nImprime box1\n";
	box1.display();
	// Get the rectangle's width and length from the user.
	cout << "This program will calculate the area of a\n";
	cout << "rectangle. What is the width? ";
	cin >> rectWidth;
	cout << "What is the length? ";
	cin >> rectLength;
	// Store the width and length of the rectangle
	// in the box1 object.
	box1.setWidth(rectWidth);
	box1.setLength(rectLength);
	cout << "\nImprime box1\n";
	// Display the rectangle's data.
	box1.display();
	//Crea una instancia de nombre box2 con valores dados
	Rectangle box2(3, 5);
	cout << "\nImprime box2\n";
}
