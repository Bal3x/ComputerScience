#include "Rectangle.h"
#include <iostream>

using namespace::std;

int main(){
    double width;
    double length;
    
    //Create Rectangle object
    Rectangle myRectangle;
    
    //Get width and length
    cout << "Enter the width of the rectangle: " << endl;
    cin >> width;
    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;
    
    //Store values in Rectangle object using try and catch
    try{
        myRectangle.setWidth(width);
        myRectangle.setLength(length);
        cout << "The area of the rectangle is " << myRectangle.getArea() << endl;
    }
    catch(Rectangle::NegativeWidth){
        cout << "ERROR: A negative value was entered.\n";
    }
    catch(Rectangle::NegativeLength){
        cout << "ERROR: A negative value was entered.\n";
    }
    
    return 0;
    
}

    

