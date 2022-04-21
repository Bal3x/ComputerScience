#include "Rectangle.h"
#include <iostream>

using namespace::std;

void Rectangle::setWidth(double w){
    if(w > 0.0)
        width = w;
    else
        throw NegativeWidth();
}
void Rectangle::setLength(double l){
    if (l > 0.0)
        length = l;
    else
        throw NegativeLength();
}
