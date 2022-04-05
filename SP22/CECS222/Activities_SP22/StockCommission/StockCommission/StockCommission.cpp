#include <iostream>
using namespace::std;

#include "StockCommission.h"

// Constructors and Destructor
Stock::Stock() {

	amountShares = 1;
	stockPrice = 35.00;
	stockBrokerPercentage = 0.02;
}
Stock::Stock(int aShares, double aStockPrice) {
	setAmountShares(aShares);
	setStockPrice(aStockPrice);
	setStockBrokerPercentage();
}
Stock::~Stock() {

}
// Member Function
//Mutators **************************************************
// Member Function that set the amount of shares the user wants to purchase
void Stock::setAmountShares(int aShares) {
	amountShares = aShares;
}

void Stock::setStockPrice(double aStockPrice) {
	stockPrice = aStockPrice;
}
void Stock::setStockBrokerPercentage() {
	stockBrokerPercentage = 0.02;
}
// Accessors ***************************************************
int Stock::getAmountShares() const {
	return amountShares;
}
double Stock::getStockPrice() const {
	return stockPrice;
}
double Stock::getStockBrokerPercentage() const {
	return stockBrokerPercentage;
}
// calculations
double Stock::amountPaidforStock() const {
	return getAmountShares() * getStockPrice();
}
double Stock::amountCommissionPaid() const {
	return (getAmountShares() * getStockPrice()) * getStockBrokerPercentage();
}
double Stock::totalAmountPaid() const {
	 return amountPaidforStock() + amountCommissionPaid();
}
// display
void Stock::display() const {

	cout << "The amount paid for the stock is: " << amountPaidforStock() << endl;
	cout << "The amount paid for commission is: " << amountCommissionPaid() << endl;
	cout << "The total amount paid is: " << totalAmountPaid() << endl;
}

