//Using exceptions handlers to recover from Errors
#include "Rectangle2.h"
#include <iostream>

using namespace::std;

int main(){
    double width;
    double length;
    bool tryAgain = true;
    
    //Create Rectangle object
    Rectangle2 myRectangle;
    
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
        catch(Rectangle2::NegativeWidth){
            cout << "ERROR: A negative value was entered.\n";
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
        catch(Rectangle2::NegativeLength){
            cout << "ERROR: A negative value was entered.\n";
            cout << "Enter a non negative value: " << endl;
            cin >> length;
        }
    
    }
    
    //Print the area of the rectangle
    cout << "The area of the rectangle is " << myRectangle.getArea() << endl;
    
    return 0;
}
