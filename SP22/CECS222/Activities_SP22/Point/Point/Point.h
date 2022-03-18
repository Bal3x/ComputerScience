#pragma once

#include <iostream>

using namespace::std;

class Point {
private:
	double x, y;
public:
	Point();
	Point(double aX, double aY);
	~Point();

	void setX(double aX);
	void setY(double aY);
	double getX() const;
	double getY() const;

	void display() const;

};
