#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "Circle.h"

class Circle {
private:
	double radius;
public:
	Circle();
	Circle(double aRadius);
	void setRadius(double aRadius);
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
	void display() const;
};
#endif