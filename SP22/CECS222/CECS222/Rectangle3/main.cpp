//Extracting data from the exceptions class
//Storing negative values in exception classes to return them to user or use them later.

#include "Rectangle3.h"
#include <iostream>

using namespace::std;

int main(){
    
    double width;
    double length;
    bool tryAgain = true;
    
    //Create Rectangle object
    Rectangle3 myRectangle;
    
    //Get width and length
    //Enter the width of the rectangle
    cout << "Enter the width of the rectangle: " << endl;
    cin >> width;
    
    //Verification/Exception handling
    //Store values in Rectangle object using try and catch
    while(tryAgain){
        try{
            myRectangle.setWidth(width);
            tryAgain = false;
        }
        catch(Rectangle3::NegativeWidth w){
            cout << "ERROR: A negative value " << w.getNegativeValue() << " was entered.\n";
            cout << "Enter a non negative value: " << endl;
            cin >> width;
        }
    }

    //Get the length of the rectangle
    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;
    
    //Reset tryAgain value
    tryAgain = true;
    
    //Store values in Rectangle object using try and catch
    while(tryAgain){
        try{
            myRectangle.setLength(length);
            tryAgain = false;
        }
        catch(Rectangle3::NegativeLength l){
            cout << "ERROR: A negative value " << l.getNegativeValue() << " was entered.\n";
            cout << "Enter a non negative value: " << endl;
            cin >> length;
        }
    
    }
    
    //Print the area of the rectangle
    cout << "The area of the rectangle is " << myRectangle.getArea() << endl;
    
    return 0;
}

