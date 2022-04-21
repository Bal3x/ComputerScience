#include <iostream>	
#include <string>
#include "Animal.h"

using namespace::std;

Animal::Animal() {
	setNumberOfAnimals(1);
	setAnimalName("Cat");
	setAnimalColor("Black");
	setAnimalWeight("10");
	setAnimalLegs("4");
	
}
Animal::Animal(string aName, string aColor, string aWeight, string aLegs, int aNum) {
	setNumberOfAnimals(aNum);
	setAnimalName(aName);
	setAnimalColor(aColor);
	setAnimalWeight(aWeight);
	setAnimalLegs(aLegs);
}
Animal::~Animal() {
	cout << "Destructor has been invoked." << endl;
}
void Animal::setNumberOfAnimals(int aNum) {
	numAnimals = aNum;
}
void Animal::setAnimalName(string aName) {
	name = aName;
}
void Animal::setAnimalColor(string aColor) {
	color = aColor;
}
void Animal::setAnimalWeight(string aWeight) {
	weight = aWeight;
}
void Animal::setAnimalLegs(string aLegs) {
	legs = aLegs;
}
string Animal::getAnimalName() {
	return name;
}
string Animal::getAnimalColor() {
	return color;
}
string Animal::getAnimalWeight() {
	return weight;
}
string Animal::getAnimalLegs() {
	return legs;
}
void Animal::displayAnimals() {
	cout << "Name" << " " << "\tColor" << "\tWeight" << "\tLegs" << endl; 
	cout << name << "\t" << color << "\t" << weight << "\t" << legs << endl;
	system("pause");

}
void Animal::addAnimal() {
	for (int i = 0; i < numAnimals; i++) {
		cout << "Enter the name of the animal." << endl;
		cin >> name;
		cout << "Enter the color of the animal." << endl;
		cin >> color;
		cout << "Enter the weight of the animal." << endl;
		cin >> weight;
		cout << "Enter how many legs the animal has." << endl;
		cin >> legs;
	}//end if
	numAnimals++;
}
void Animal::optionsMenu(string aName, string aColor,string aWeight, string aLegs, int aNum) {
	int choice;

	do {
		//display Menu
		menu();

		cout << "\nEnter your choice from 1 -3: " << endl;
		cin >> choice;
		while (choice > 3 && choice < 0) {
			cout << "Invalide Choice please try again (1 -3): " << endl;
			cin >> choice;
		}//end while
		switch (choice)
		{
		case 1:
			addAnimal();
			break;
		case 2:
			displayAnimals();
			break;
		case 3:
			cout << "Thank you!" << endl;
			system("pause");
			break;

		default: cout << "Invalid choice.";
			break;
		}
		system("cls");
	}while (choice != 3);
}
void Animal::menu() {
	cout << "\tANIMAL\t" << endl;
	cout << "Option 1: Add a New Animal." << endl;
	cout << "Option 2: View all Animals entered." << endl;
	cout << "Option 3: Exit." << endl;
}











