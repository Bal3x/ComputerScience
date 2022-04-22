#pragma once
#include <iostream>
using namespace::std;

class Rectangle2{
    
private:
    double width;
    double length;
    
public:
    //Exception classes
    class NegativeWidth{};
    class NegativeLength{};
    //Default Constructor
    Rectangle2(){ 
        width = 0.0; length = 0.0;
    }
    ~Rectangle2(){
        
    }
    
    //Mutator Functions
    void setWidth(double w);
    void setLength(double l);
    
    //Accessor Functions
    double getWidth() const{
        return width;
    }
    double getLength() const{
        return length;
    }
    double getArea() const{
        return width * length;
    }

};


