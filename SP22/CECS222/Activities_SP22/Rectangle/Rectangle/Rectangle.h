#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;
// Rectangle class declaration.
class Rectangle
{
private:
	double width;
	double length;
public:
	//Cosntructores
	Rectangle();
	Rectangle(double, double);
	Rectangle(const Rectangle&);
	//Destructor
	~Rectangle();
	//Funciones que colocan un valor a los atributos
	void setWidth(double);
	void setLength(double);
	//Funciones que retornan el valor de los atributos
	double getWidth() const;
	double getLength() const;
	//Funcion que calcula el area de un reactangulo
	double getArea() const;
	//Funcion que calcula el perimetro de un rectangulo
	double getPerimeter() const;
	//Funcion que imprime el area y el perimetro de un rectangulo
	void display() const;
};
#endif
