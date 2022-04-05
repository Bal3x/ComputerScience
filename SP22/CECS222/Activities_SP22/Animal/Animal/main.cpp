#include <iostream>
#include <string>
#include "Animal.h"

using namespace::std;

int main() {
	
	string aName;
	string aColor;
	string aWeight;
	string aLegs;
	int aNum = 1;
	
	Animal newAnimal;
	
	newAnimal.optionsMenu(aName, aColor, aWeight, aLegs, aNum);

	return 0;
}
