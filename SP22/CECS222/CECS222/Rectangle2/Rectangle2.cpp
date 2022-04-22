#include "Rectangle2.h"
#include <iostream>

using namespace::std;

void Rectangle2::setWidth(double w){
    if(w > 0)
        width = w;
    else
        throw NegativeWidth();
}
void Rectangle2::setLength(double l){
    if (l > 0)
        length = l;
    else
        throw NegativeLength();
}
