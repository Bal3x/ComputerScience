#include <iostream>
#include "Circle.h"

using namespace::std;

int main() {
	Circle circle;
	double aRadius;
	circle.display();

	cout << "Enter the Radius of the Circle: ";
	cin >> aRadius;
	circle.setRadius(aRadius);
	circle.display();
	system("pause");

	return 0;
}
