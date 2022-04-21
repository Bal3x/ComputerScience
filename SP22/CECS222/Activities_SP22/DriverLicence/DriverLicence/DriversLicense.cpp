#include <iostream>
#include "DriversLicense.h"
#include <string>

using namespace::std;

DriversLicense::DriversLicense() {

}
DriversLicense::~DriversLicense() {

}
//funcion que pregunta al usuario de cuantas preguntas es el examen
void DriversLicense::setArraySize(int &aSize) {
	cout << "Entre la cantidad de preguntas del examen. " << endl;
	cin >> aSize;
	arrSize = aSize;
}
//funcion que inizializa las respuestas del examen
void DriversLicense::setCorrectAnswers(string* cAnswers, int& aSize) {
	string* correctAnswers = new string[] {"A", "D", "B", "B", "C",
										   "B", "A", "B", "C", "D",
										   "A", "C", "D", "B", "D", 
										   "C", "C", "A", "D", "B"};
	for (int i = 0; i < getArrSize(); i++) {
		cAnswers[i] = correctAnswers[i];
	}//end for
}
//funcion que entre las respuestas del estudiante
void DriversLicense::setStudentsAnswers(string* uAnswers, int& aSize) {
	string* studentAnswers = new string[aSize];
	cout << "Entre sus respuestas: " << endl;
	for (int i = 0; i < getArrSize(); i++) {
		cout << "Para pregunta " << i + 1 << ": " << endl;
		cin >> *(studentAnswers + i);
	}//end for


}

int DriversLicense::getArrSize() {
	return arrSize;
}
