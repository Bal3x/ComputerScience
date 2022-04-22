#pragma once
#include <iostream>
using namespace::std;

class Rectangle3{
    
private:
    double width;
    double length;
    
public:
    //Exception classes
    class NegativeWidth{
        private: 
            double value;
        public:
            //storing the negative width value
            NegativeWidth(double val){
                value = val;
            }
            double getNegativeValue() const {
                return value;
            }
    };
    
    class NegativeLength{
        private:
            double value;
        public:
            NegativeLength(double val){
                value = val;
            }
            double getNegativeValue() const {
                return value;
            }
    };
    //Default Constructor
    Rectangle3(){ 
        width = 0.0; length = 0.0;
    }
    ~Rectangle3(){
        
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


