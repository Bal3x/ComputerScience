#include <iostream>
#include <string>

//Function prototype
double divide(int, int);

using namespace::std;

int main(){
    int num1, num2;
    double quotient;
    
    //Get two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    //Divide num1 by num2 and catch any potential exceptions
    try{
        quotient = divide(num1, num2);
        cout << "The quotient is " << quotient << endl;
    }
    catch(string exceptionString){
        cout << exceptionString;
    }
    
    return 0;
}
double divide(int numerator, int denominator){
    if(denominator == 0){
        string exceptionString = "ERROR: Cannot divide by zero.\n";
        throw exceptionString;
    }
    return numerator/denominator;
}
