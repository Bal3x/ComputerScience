#include <iostream>
#include <string>

using namespace::std;

void setArraySize(int&);
void setStudentsAnswers(char*&, int);
void setCorrectAnswers(char*&, int);
void displayStudentAnswers(char*, int);
void displayCorrectAnswers(char*, int);
void compareAnswers(char*, char*,bool*&, int);
void wrongAnswers(char*, char*, bool*, int);
void finalGrade(bool*, int);

int main() {
	char* correctAnswers = nullptr;
	char* studentAnswers = nullptr;
	bool* comparedArray = nullptr;
	int aSize;

	setArraySize(aSize);
	setCorrectAnswers(correctAnswers, aSize);
	setStudentsAnswers(studentAnswers, aSize);
	compareAnswers(correctAnswers, studentAnswers, comparedArray, aSize);
	displayCorrectAnswers(correctAnswers, aSize);
	displayStudentAnswers(studentAnswers, aSize);
	wrongAnswers(correctAnswers, studentAnswers, comparedArray, aSize);
	finalGrade(comparedArray, aSize);

	delete[] correctAnswers;
	delete[] studentAnswers;
	delete[] comparedArray;
	correctAnswers = nullptr;
	studentAnswers = nullptr;
	comparedArray = nullptr;

	return 0;
}
// funcion que pregunta al usuario cuantas preguntas tiene el examen
void setArraySize(int& aSize) {
	cout << "Enter the amount of questions: " << endl;
	cin >> aSize;
}
//funcion que inizializa las respuestas del examen
void setCorrectAnswers(char*& correctAnswers, int aSize) {
	correctAnswers = new char[]{ 'A', 'D', 'B', 'B', 'C',
								   'B', 'A', 'B', 'C', 'D',
								   'A', 'C', 'D', 'B', 'D',
								   'C', 'C', 'A', 'D', 'B' };
}
//funcion que entre las respuestas del estudiante
void setStudentsAnswers(char*& studentAnswers, int aSize) {
	studentAnswers = new char[aSize];
	cout << "Chose between A, B, C o D." << endl;
	for (int i = 0; i < aSize; i++) {
		cout << "Your answer for question " << i + 1 << ": ";
		cin >> *(studentAnswers + i);
		while (*(studentAnswers + i) != 'A' && *(studentAnswers + i) != 'B' && *(studentAnswers + i) != 'C' && *(studentAnswers + i) != 'D') {
			cout << "Invalid entry please try again." << endl;
			cin >> *(studentAnswers + i);
		}//end while
	}//end for
}
//funcion que compara las constestaciones
void compareAnswers(char* correctAnswers, char* studentAnswers, bool*& comparedArray, int aSize) {
	comparedArray = new bool[aSize];
	for (int i = 0; i < aSize; i++) {
		if (*(correctAnswers + i) == *(studentAnswers + i)) {
			comparedArray[i] = true;
		}
		else
			comparedArray[i] = false;
	}
}
//funcion que imprime si las respuestas del estudiante estan correctas
void wrongAnswers(char* correctAnswers, char* studentsAnswers, bool* comparedArray, int aSize) {
	for (int i = 0; i < aSize; i++) {
		if (*(comparedArray + i) == 0) {
			cout << "The Student answer " << *(studentsAnswers + i) << " is incorrect for question " << i + 1 
				 <<  ". The correct answer is: " << * (correctAnswers + i) << endl;
		}//end if
	}//end for
}
//funcion que revisa si el estudiante paso el examen e imprime si paso o no
void finalGrade(bool* comparedArray, int aSize) {
	int total = 0;
	for (int i = 0; i < aSize; i++) {
		if (*(comparedArray + i) == 1) {
			total ++;
		}//end if
	}//end for
	cout << "total: " << total << endl;
		if (double(total / aSize) >= 0.75 || total >= 15) {
			cout << "Congratulations you passed the exam!" << endl;
		}//end if
		else
			cout << "You did not pass the exam, please try again." << endl;
}
//funcion que imprime las respuestas correctas
void displayCorrectAnswers(char* correctAnswers, int aSize) {
	cout << "The correct answers are:" << endl;
	for (int i = 0; i < aSize; i++) {
		cout << *(correctAnswers + i) << " ";
	}//end for
	cout << endl;
}
//funcion que imprime las respuestas del estudiante
void displayStudentAnswers(char* studentAnswers, int aSize) {
	cout << "The user answers are:" << endl;
	for (int i = 0; i < aSize; i++) {
		cout << *(studentAnswers + i) << " ";
	}//end for
	cout << endl;
}
