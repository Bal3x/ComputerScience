#include <iostream>
using namespace::std;

// prototypes
int* getSharesAmount();
double* getStockPrice();
double* setStockCommission();
void stockCommission(int*, double*, double*, double*&);
void totalAmountPaid(int*, double*, double*&);
void totalAmountSold(int*, double*, double*&);
void calculateProfit(double*, double*, double*, double*, double*&);
void display(double*, double*, double*, double*, double*);


int main() {
	// pointer variables
	int *shares = nullptr;
	double *stockPrice = nullptr;
	double *stockBrokerCommission = nullptr;
	double* amountPaid = nullptr;
	double* commissionPaid = nullptr;
	double* newStockPrice = nullptr;
	double* amountSold = nullptr;
	double* commissionPaidSell = nullptr;
	double* profit = nullptr;

	//create dynamic allocation for shares pointer
	shares = new int;
	//create dynamic allocation for stockPrice pointer
	stockPrice = new double;
	//create dynamic allocation for stockBrokerCommission pointer
	stockBrokerCommission = new double;
	//create dynamic allocation for amountPaid pointer
	amountPaid = new double;
	//create dynamic allocation for amountPaid pointer
	commissionPaid = new double;
	//create dynamic allocation for newStockPrice pointer
	newStockPrice = new double;
	//create dynamic allocation for amountSold pointer
	amountSold = new double;
	//create dynamic allocation for commissionPaidSell pointer
	commissionPaidSell = new double;
	//create dynamic allocation for profit pointer
	profit = new double;


	//ask user for shares amount
	shares = getSharesAmount();
	// ask user for stock price per share
	stockPrice = getStockPrice();
	//set the stock broker commission
	stockBrokerCommission = setStockCommission();
	//calculate the totalAmount that was paid for the shares
	totalAmountPaid(shares, stockPrice, amountPaid);
	//calculate the stock commission paid for the shares
	stockCommission(shares, stockPrice, stockBrokerCommission, commissionPaid);
	//calculate the amount the stock was sold for
	cout << "New Price per share." << endl;
	newStockPrice = getStockPrice();
	totalAmountSold(shares, newStockPrice, amountSold);
	//calculate the stock commission paid for shares after sell
	stockCommission(shares, newStockPrice, stockBrokerCommission, commissionPaidSell);
	//calculate profit
	calculateProfit(amountPaid, amountSold, commissionPaid, commissionPaidSell, profit);
	//display calculations
	display(amountPaid, amountSold, commissionPaid, commissionPaidSell, profit);


	//free variables dynamic memory
	delete shares;
	delete stockPrice;
	delete stockBrokerCommission;
	delete amountPaid;
	delete commissionPaid;
	delete newStockPrice;
	delete amountSold;
	delete commissionPaidSell;
	delete profit;

	//inititalize variables to point to nullptr
	shares = nullptr;
	stockPrice = nullptr;
	stockBrokerCommission = nullptr;
	amountPaid = nullptr;
	commissionPaid = nullptr;
	newStockPrice = nullptr;
	amountSold = nullptr;
	commissionPaidSell = nullptr;
	profit = nullptr;

	return 0;
}//end of main

//function that ask user and validates the amount of shares user wants to buy 
//returns the amount of shares to be purchased
int* getSharesAmount() {
	int* shares;
	shares = new int;
	cout << "Enter the amount of shares: " << endl;
	cin >> *shares;
	while (*shares < 0) {
		cout << "Invalid amount of shares, please try again." << endl;
		cout << "Enter the amount of shares: " << endl;
		cin >> *shares;
	}
	return shares;
}
//function that ask the user for the stock price  
//returns the price per share
double* getStockPrice() {
	double *stockPrice;
	stockPrice = new double;
	cout << "Enter the stock price per share: " << endl;
	cin >> *stockPrice;
	while (*stockPrice < 0) {
		cout << "Invalid stock price. Please try again." << endl;
		cout << "Enter the stock price per share: " << endl;
		cin >> *stockPrice;
	}
	return stockPrice;
}
//function that set the stock broker commission
//return the commission percentage
double* setStockCommission() {
	double *stockBrokerCommission;
	stockBrokerCommission = new double;
	*stockBrokerCommission = 0.02;

	return stockBrokerCommission;
}
//function that calculates the commission that the user paid in the initial transaction
void stockCommission(int* shares, double* stockPrice, double* stockBrokerCommission, double *&commissionPaid) {
	*commissionPaid = double(*shares * *stockPrice) * *stockBrokerCommission;
}
//function that calculates the total amount the user paid for the shares
void totalAmountPaid(int* shares, double* stockPrice, double*& amountPaid) {
	*amountPaid = double(*shares * *stockPrice);
}
//function that calculates the total amount the user received by selling the shares
void totalAmountSold(int* shares, double* newStockPrice, double*& amountSold) {
	*amountSold = double(* shares * *newStockPrice);
}

//function that calculates the total profit the user gained after selling the shares
void calculateProfit(double* amountPaid, double* amountSold, double* commissionPaid, double* commissionPaidSell, double*& profit) {
	*profit = (*amountSold - *amountPaid) - (*commissionPaid + *commissionPaidSell);
}
//function that displays all the information relevant to the transaction
void display(double* amountPaid, double* amountSold, double* commissionPaid, double* commissionPaidSell, double* profit) {
	cout << "The amount of money paid is for shares: " << * amountPaid << endl;
	cout << "The commission paid for buying: " << * commissionPaid << endl;
	cout << "The commission paid for selling: " << *commissionPaidSell << endl;
	cout << "The total profit is: " << *profit << endl;
}

