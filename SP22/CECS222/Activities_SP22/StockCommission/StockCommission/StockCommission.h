#pragma once

#include <iostream>	
using namespace::std;

class Stock {
private:
	// attributes
	int amountShares;
	double stockPrice;
	double stockBrokerPercentage;

public:
	// constructors and destructor
	Stock();
	Stock(int aShares, double aStockPrice);
	~Stock();

	// member functions
	// mutators
	void setAmountShares(int aShares);
	void setStockPrice(double aStockPrice);
	void setStockBrokerPercentage();

	// accessors
	int getAmountShares() const;
	double getStockPrice() const;
	double getStockBrokerPercentage() const;

	// calculations
	double amountPaidforStock() const;
	double amountCommissionPaid() const;
	double totalAmountPaid() const;

	//display
	void display() const;

};

