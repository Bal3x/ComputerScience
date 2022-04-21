#pragma once
#include <iostream>
using namespace::std;


class swimmingPool {
private:
	float length; 
	float width;
	float depth;	//in feet
	float fill; 
	float drain; //in galons per minute
	float waterNeeded;

public:
	//constructors
	swimmingPool();
	swimmingPool(float length, float width, float depth, float fill, float drain);
	//copy constructor
	swimmingPool(const swimmingPool& obj);
	//destructor
	~swimmingPool();

	//mutators
	swimmingPool& setLength(float aLength);
	swimmingPool& setDepth(float aDepth);
	swimmingPool& setFill(float aFill);
	swimmingPool& setDrain(float aDrain);
	swimmingPool& setWidth(float aWidth);

	//accessors
	float getLength() const;
	float getWidth() const;
	float getDepth() const;
	float getFill() const;
	float getDrain() const;

	//member function that calculates the amount of water needed to fill the pool
	float volume();
	float amountWaterNeeded();
	float amountTimeFill();
	float amountTimeDrain();
	float timeFillDrain();
	float addDrainWater();
	//member function that displays the pool info
	void displaySwimmingPool();
};
