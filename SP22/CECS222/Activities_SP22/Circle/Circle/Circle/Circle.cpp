#include <iostream>
#include "Circle.h"	
using namespace ::std;

Circle::Circle() {
	setRadius(1.0);
}
Circle::Circle(double aRadius) {
	setRadius(aRadius);
}
void Circle::setRadius(double aRadius) {
	radius = aRadius;
}
double Circle::getArea()const {
	const double PI = 3.14159;
	return PI * getRadius() * getRadius();
}
double Circle::getRadius() const {
	return radius;
}
double Circle::getDiameter() const {
	return radius * 2;
}
double Circle::getCircumference() const {
	const double PI = 3.14159;
	return 2 * PI * radius;
}
void Circle::display() const {
	cout << "The area of the Circle is " << getArea() << endl;
	cout << "The Diameter of the Circle is " << getDiameter() << endl;
	cout << "The Circumference of the Circle is " << getCircumference() << endl;
}
