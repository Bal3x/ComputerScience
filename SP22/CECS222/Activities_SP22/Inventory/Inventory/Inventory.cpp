include "Inventory.h"
#include <iostream>
#include <iomanip>
#include<cstring>
using namespace std;

Inventory::Inventory() {
    totalCost = 0;
    cost = 0;
    quantity = 0;
    itemNumber = 0;
}
Inventory::Inventory(int* aItemNumber, int* aQuantity, double* aCost, double* aTotalCost) {
    setItemNumber(aItemNumber);
    setQuantity(aQuantity);
    setCost(aCost);
    setTotalCost(totalCost);
}
void Inventory::setItemNumber(int* aItemNumber) {
    itemNumber = nullptr;
    itemNumber = new int;
    itemNumber = aItemNumber;
}
void Inventory::setQuantity(int* aQuantity) {
    quantity = nullptr;
    quantity = new int;
    quantity = aQuantity;
}
void Inventory::setCost(double* aCost) {
    cost = nullptr;
    cost = new double;
    cost = aCost;
}
void Inventory::setTotalCost(double* aTotalCost) {
    totalCost = new double; //se le pone valor de double* a totalCost
    totalCost = aTotalCost;
    int* a = getQuantity();
    double b = *getCost();

    *totalCost = *a * b;
}
int* Inventory::getItemNumber()const {

    return itemNumber;
}
int* Inventory::getQuantity()const {

    return quantity;
}
double* Inventory::getCost()const {

    return cost;
}
double* Inventory::getTotalCost()const {

    return totalCost;

}
void Inventory::display()const {

    cout << "ItemNumber: " << *getItemNumber() << endl << "Quantity: " << *getQuantity() << endl << "Cost: " << *getCost() << endl << "Total cost: " << *getTotalCost() << endl;



}