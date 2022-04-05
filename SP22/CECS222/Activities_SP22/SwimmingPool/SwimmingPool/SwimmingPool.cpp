#include <iostream>
#include "SwimmingPool.h"
#include <iomanip>
using namespace::std;
char answer;
//constructors**********************************************
swimmingPool::swimmingPool() {
	length = 0;
	width = 0;
	depth = 0;
	fill = 0;
	drain = 0;
	waterNeeded = 0;
}
swimmingPool::swimmingPool(float aLength, float aWidth, float aDepth, float aFill, float aDrain) {
	setLength(aLength);
	setWidth(aWidth);
	setDepth(aDepth);
	setFill(aFill);
	setDrain(aDrain);
}
//copy constructor
swimmingPool::swimmingPool(const swimmingPool& obj) {
	setLength(obj.getLength());
	setWidth(obj.getWidth());
	setDepth(obj.getDepth());
	setFill(obj.getFill());
	setDrain(obj.getDrain());
}
swimmingPool::~swimmingPool() {
	/*delete length;
	delete depth;
	delete fill;
	delete drain;
	length = nullptr;
	depth = nullptr;
	fill = nullptr;
	drain = nullptr;*/
}
//mutators**************************************************
swimmingPool& swimmingPool::setLength(float aLength) {
	//length = new float;
	this->length = aLength;
	return *this;
}
swimmingPool& swimmingPool::setWidth(float aWidth) {
	//length = new float;
	this->width = aWidth;
	return *this;
}
swimmingPool& swimmingPool::setDepth(float aDepth) {
	//depth = new float;
	this->depth = aDepth;
	return *this;
}
swimmingPool& swimmingPool::setFill(float aFill) {
	//fill = new float;
	this->fill = aFill;
	return *this;
}
swimmingPool& swimmingPool::setDrain(float aDrain) {
	//drain = new float;
	this->drain = aDrain;
	return *this;
}
//accessors*************************************************
float swimmingPool::getLength() const {
	return this->length;
}
float swimmingPool::getWidth() const {
	return this->width;
}
float swimmingPool::getDepth() const {
	return this->depth;
}
float swimmingPool::getFill() const {
	return this->fill;
}
float swimmingPool::getDrain() const {
	return this->drain;
}
float swimmingPool::volume() {
	return (this->length * this->width * this->depth) * 7.480543;		//in gal
}
float swimmingPool::amountWaterNeeded() {
	float partFull;
	cout << "Is the pool partially full? (Enter Y for yes, Enter N for no.)" << endl;
	cin >> answer;
	if (answer == 'Y' || answer == 'y') {
		cout << "Enter the amount of galons in pool." << endl;
		cin >> partFull;
	}
	else	
		partFull = 0;

	waterNeeded = ((this->length * this->width * this->depth) * 7.480543) - partFull;

	return waterNeeded;
}
float swimmingPool::amountTimeFill() {
	return this->amountWaterNeeded() / fill;
}
float swimmingPool::amountTimeDrain() {
	return this->amountWaterNeeded() / drain;
}
float swimmingPool::timeFillDrain() {
	char ans = ' ';
	float partFillDrain;
	cout << "Do you want to fill or drain the pool? (Enter F for fill, Enter D for drain.)" << endl;
	cin >> answer;
	if (answer == 'F' || answer == 'f') {
		cout << "Do you want to fill it completely or partially. (Enter C for completly, Enter P for partially.)" << endl;
		cin >> ans;
		if (ans == 'C' || ans == 'c') {
			return amountTimeFill();
		}
		else {
			cout << "Enter the amount of galons you want to fill in the pool." << endl;
			cin >> partFillDrain;
			return partFillDrain / this->fill;
		}
	}
	else {
		cout << "Do you want to drain it completely or partially. (Enter C for completly, Enter P for partially.)" << endl;
		cin >> ans;
		if (ans == 'C' || ans == 'c') {
			return amountTimeDrain();
		}
		else {
			cout << "Enter the amount of galons you want to fill in the pool." << endl;
			cin >> partFillDrain;
			return partFillDrain / this->drain;
		}
	}
}
float swimmingPool::addDrainWater() {
	float time;
	if (answer == 'F' || answer == 'f') {
		cout << "How long do you want to fill it for?." << endl;
		cin >> time;
		return time / this->fill;
	}
	else {
	cout << "How long do you want to drain it for?." << endl;
		cin >> time;
		return time / this->drain;
	}
}
//member function that displays pool info
void swimmingPool::displaySwimmingPool() {
	
	cout << fixed << setprecision(2);
	cout << "The length of the pool is: " << this->getLength() << endl;
	cout << "The depth of the pool is: " << this->getDepth() << endl;
	cout << "The fill rate of the pool is: " << this->getFill() << endl;
	cout << "The drain rate of the pool is: " << this->getDrain() << endl;
	cout << "The amount of water needed is: " << this->waterNeeded << endl;
}