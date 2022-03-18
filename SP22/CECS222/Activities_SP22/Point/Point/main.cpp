#include <iostream>
#include "Point.h"

using namespace::std;

int main() {
	const int MAX_CAPACITY = 10;
	int n;
	int aX, aY;
	int index;

	Point myArrayofPoints[MAX_CAPACITY];

	cout << "Entre la cantidad de puntos para analyzar el cuadrante (<10): " << endl;
	cin >> n;
	
	for (index = 0; index <= n; index++) {
		cout << "Entre las coordenadas de par ordenado: " << endl;
		cin >> aX >> aY;
		myArrayofPoints[index].setX(aX);
		myArrayofPoints[index].setY(aY);
	}

	for (index = 0; index <= n; index++) {
		if (myArrayofPoints[index].getX() == 0.0 && (myArrayofPoints[index].getY() == 0.0)) {
			myArrayofPoints[index].display();
			cout << "Esta en el origen\n";
		}//end if
	}//end for
	system("pause");

	return 0;
}