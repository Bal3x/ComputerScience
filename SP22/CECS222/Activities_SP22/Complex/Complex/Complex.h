#pragma once
#include <iostream>
#include "Display.h"
using namespace::std;

class Complex {
private:
	int real;
	int imaginary;

public:
	Complex();
	Complex(int aReal, int aImag);

	void setReal(int aReal);
	void setImg(int aImag);

	int getReal() const;
	int getImg() const;
	
	void addComplexNum(Complex complexNum1, Complex complexNum2);
	void substractComplexNum(Complex complexNum1, Complex complexNum2);
	void multiplyComplexNum(Complex complexNum1, Complex complexNum2);


	/*void operator + (Complex& Num1, Complex& Num2) {
	Num1.real + Num2.real;
	Num1.imaginary + Num2.imaginary;
	}*/

	/*void operator - (Complex& Num1, Complex& Num2);
	void operator * (Complex& Num1, Complex& Num2);*/

	void display() const;

	//friend void Display::display() const;
};
