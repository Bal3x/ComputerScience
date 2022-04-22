#include <iostream>
#include <string>

using namespace::std;
//Prototypes
void isValid(int, int);

int main(){
    int num1, den1, num2, den2, num3, den3;
    bool tryAgain = true;
    
    //Entre el numerador y el denominador de la primera fraccion
    cout << "Entre el numerador de la primera fraccion: " << endl;
    cin >> num1;
    cout << "Entre el denominador de la primera fraccion: " << endl;
    cin >> den1;
    
    while(tryAgain){
        try{
            isValid(num1, den1);
            tryAgain = false;
        }
        catch(string exceptionString){
            cout << exceptionString;
            cout << "Entre el denominador de la primera fraccion. " << endl;
            cin >> den1;
        }
    }
    
    //Entre el numerador y denominador de la segunda fraccion
    cout << "Entre el numerador de la segunda fraccion: " << endl;
    cin >> num2;
    cout << "Entre el denominador de la segunda fraccion: " << endl;
    cin >> den2;
    
    tryAgain = true;
    
    while(tryAgain){
        try{
            isValid(num2, den2);
            tryAgain = false;
        }
        catch(string exceptionString){
            cout << exceptionString;
            cout << "Entre el denominador del segunda fraccion: " << endl;
            cin >> den2;
        }
    }
    
    //Suma de las fracciones
    num3 = (num1 * den2) + (num2 * den1);
    den3 = den1 * den2;
    
    cout << "La suma del las fracciones " << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = " << num3 
    << "/" << den3 << endl;
    
    system("pause");
    
    return 0;
    
}

void isValid(int n, int d){
    if (d == 0){
        string exceptionString = "ERROR: Cannot Divide by zero."; 
        throw exceptionString;
    }//end if
}