#include <iostream>
#include "Inventory.h"
using namespace std;
void Addinstance(Inventory* myArray1, int SIZE);



int main() {
    int choice = 0;
    int SIZE = 0;

    cout << "Enter the capacity of the array: \n";
    cin >> SIZE;

    Inventory* myArray1;
    myArray1 = new Inventory[SIZE];

    cout << "Choose a option\n";
    cout << "------------------------\n";
    cout << "1) Add a instance\n";
    cout << "2) Remove\n";
    cout << "3) Modificate content\n";
    cout << "4) Display the content\n";
    cout << "5) Quit \n";
    cin >> choice;
    switch (choice)
    {

    case 1:
        Addinstance(myArray1, SIZE);


        break;

    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    case 5:
        cout << "Bye!!!!";
        break;



    default:
        cout << "Error!,that option dont exist.\n";
        break;
    }//end switch



    return 0;
}//end main
void Addinstance(Inventory* myArray1, int SIZE) {
    int* aitemNumber = nullptr;
    aitemNumber = new int;
    int* aQuantity = nullptr;
    aQuantity = new int;
    double* aCost = nullptr;
    aCost = new double;
    double* aTotalCost = nullptr;
    aTotalCost = new double;


    for (int i = 0; i < SIZE; i++) {

        cout << "Enter the item Number: \n";
        cin >> *aitemNumber;
        myArray1->setItemNumber(aitemNumber);
        cout << "Enter the quantity on hand: \n";
        cin >> *aQuantity;
        myArray1[i].setQuantity(aQuantity);
        cout << "Enter the cost of: \n";
        cin >> *aCost;
        myArray1[i].setCost(aCost);
        myArray1[i].setTotalCost(aTotalCost);
        myArray1[i].display();
    }//end for

}//end AddInstance