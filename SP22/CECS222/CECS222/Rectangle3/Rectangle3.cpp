#include "Rectangle3.h"
#include <iostream>

using namespace::std;

void Rectangle3::setWidth(double w){
    if(w > 0)
        width = w;
    else
        throw NegativeWidth(w);
}
void Rectangle3::setLength(double l){
    if (l > 0)
        length = l;
    else
        throw NegativeLength(l);
}
