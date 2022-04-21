#pragma once

#include <iostream>
#include <string>
using namespace::std;

class Animal {
private:
	string name;
	string color;
	string weight;
	string legs;
	int numAnimals = 0;


public:
	Animal();
	Animal(string aName, string aColor, string weight, string legs, int aNum);
	~Animal();

	void setNumberOfAnimals(int aNum);
	void setAnimalName(string aName);
	void setAnimalColor(string aColor);
	void setAnimalWeight(string aWeight);
	void setAnimalLegs(string aLegs);

	string getAnimalName();
	string getAnimalColor();
	string getAnimalWeight();
	string getAnimalLegs();

	void menu();
	void optionsMenu(string aName, string aColor,string aWeight, string aLegs,int aNum);
	void addAnimal();
	void displayAnimals();

};
