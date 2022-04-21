#include <iostream>
#include "StockCommission.h"
using namespace::std;

int main() {

	int aShares;
	double aStockPrice;

	Stock BuyShares;

	BuyShares.display();


	Stock BuyShares2(750, 35.00);
	// Ask user the amount of shares to purchase
	//cout << "Enter the amount of shares you want to purchase: " << endl;
	//cin >> aShares;
	//cout << "Enter the stock price: " << endl;
	//cin >> aStockPrice;

	// Member function calls
	/*BuyShares.setAmountShares(aShares);
	BuyShares.setStockPrice(aStockPrice);
	BuyShares.setStockBrokerPercentage();*/
	BuyShares2.display();




	return 0;
}