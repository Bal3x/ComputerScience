#include "Point.h"

Point::Point()
{
    setX(0.0) ;
    setY(0.0) ;
}
Point::Point(double aX, double aY){
    setX(aX);
    setY(aY);
}
Point::~Point()
{
}
void Point::setX(double aX){
    x = aX;
}
void Point::setY(double aY){
    y = aY;
}
double Point::getX() const{
    return x;
}
double Point::getY() const{
    return y;
}
void Point::cuadrante(double aX, double aY){
    
}
void Point::display() const{
    cout << "(" << getX() << ", " << getY() << ")" << endl;
}
