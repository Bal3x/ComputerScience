#include <iostream>
#include "Complex.h"

using namespace::std;

Complex::Complex() {
	//defalt constructor
	real = 0;
	imaginary = 0;
}
Complex::Complex(int aReal, int aImag) {
	setReal(aReal);
	imaginary = aImag;
}
//*************Mutators**************************
void Complex::setReal(int aReal) {
	//set real number
	real = aReal;
}
void Complex::setImg(int aImag) {
	//set img number
	imaginary = aImag;
}
//*************Accessors***************************
int Complex::getReal() const {
	return real;
}
int Complex::getImg() const {
	return imaginary;
}
//member functions to calculate complex numbers
void Complex::addComplexNum(Complex Num1, Complex Num2) { 
	setReal(Num1.getReal() + Num2.getReal())  ;
	setImg(Num1.getImg() + Num2.getImg());
}
void Complex::substractComplexNum(Complex Num1, Complex Num2) { 
	real = Num1.getReal() - Num2.getReal();
	imaginary = Num1.getImg() - Num2.getImg();
}
void Complex::multiplyComplexNum(Complex Num1, Complex Num2) { 
	real = Num1.getReal() * Num2.getReal();
	imaginary = Num1.getImg() * Num2.getImg();
}

//display
void Complex::display() const {
	if (getImg() > 0)
		cout << "The complex number: " << getReal() << " + " << getImg() << "i" << endl;
	else
		cout << "The complex number: " << getReal() << " - " << getImg() << "i" << endl;
}

