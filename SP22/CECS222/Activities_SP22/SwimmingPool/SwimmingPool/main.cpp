#include <iostream>
#include "SwimmingPool.h"

using namespace::std;

int main() {
	//pointer variables
	float aLength;
	float aDepth;
	float aFill;
	float aDrain;
	float aWidth;
	char answer;
	float partFull, partFill, waterNeeded;
	


	swimmingPool myPool1;
	//ask user for the attributes of the pool
	cout << "Enter the length of the pool: " << endl;
	cin >> aLength;
	cout << "Enter the width of the pool: " << endl;
	cin >> aWidth;
	cout << "Enter the depth of the pool: " << endl;
	cin >> aDepth;
	cout << "Enter the fill rate of the pool: " << endl;
	cin >> aFill;
	cout << "Enter the drain rate of the pool: " << endl;
	cin >> aDrain;

	//call member functions in cascade mode using this operator
	myPool1.setLength(aLength).setWidth(aWidth).setDepth(aDepth).setFill(aFill).setDrain(aDrain).displaySwimmingPool();
	cout << endl;
	
	myPool1.timeFillDrain(); // returns time to completely or partially fill or drain the pool
	myPool1.addDrainWater(); // returns how long it will take to fill or drain
	myPool1.amountWaterNeeded(); //returns the amount of water to fill an empty or partially filled pool

	myPool1.displaySwimmingPool();
	
	
	//create object with obj parameter
	swimmingPool myPool2(myPool1);
	
	return 0;
}
