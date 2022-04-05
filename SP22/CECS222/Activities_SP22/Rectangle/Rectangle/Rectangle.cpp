#include <iostream>
using namespace::std;
#include "Rectangle.h"
Rectangle::Rectangle() {
	width = 1.0;
	length = 1.0;
}
Rectangle::Rectangle(double aWidth, double aLength) {
	setWidth(aWidth);
	setLength(aLength);
}
Rectangle::Rectangle(const Rectangle& anRectangle) {
	setWidth(anRectangle.getWidth());
	setLength(anRectangle.getLength());
}
Rectangle::~Rectangle() {
	cout << "\nDESTRUYENDO OBJETO\n";
	display();
	system("pause");
}
void Rectangle::display() const
{
	cout << "Here is the rectangle's data:\n";
	cout << "Width: " << getWidth() << endl;
	cout << "Length: " << getLength() << endl;
	cout << "Area: " << getArea() << endl;
	cout << "Perimeter:" << getPerimeter() << endl;
}
//**************************************************
// setWidth assigns a value to the width member. *
//**************************************************
void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
	}
}
//***************************************************
// setLength assigns a value to the length member. *
//***************************************************
void Rectangle::setLength(double len)
{
	if (len >= 0)
		length = len;
	else
	{
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
	}
}
//***************************************************
// getWidth returns the value in the width member. *
//***************************************************
double Rectangle::getWidth() const
{
	return width;
}
//****************************************************
// getLength returns the value in the length member. *
//****************************************************
double Rectangle::getLength() const
{
	return length;
}
//******************************************************
// getArea returns the product of width times length. *
//******************************************************
double Rectangle::getArea() const
{
	return getWidth() * getLength();
}
//*****************************************************
// Funcion que retorna el perimetro de la instancia
//*****************************************************
double Rectangle::getPerimeter() const {
	return 2 * getWidth() + 2 * getLength();
}