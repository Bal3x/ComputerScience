#include <iostream>
#include "Date.h"

using namespace::std;

int main(){
    int m, d, y;
    //Prompt user to enter values date1
    cout << "Entre el mes: " << endl;
    cin >> m;
    cout << "Entre el dia: " << endl;
    cin >> d;
    cout << "Entre el ano: " << endl;
    cin >> y;
    
    //Create Date object
    Date date1(m, d, y), date2, date3(10, 12, 1992);
    
    //Display date1
    date1.displayDate();
    
    //Enter date with overloaded >> operator
    cin >> date2;
    
    //Cout with overloaded << operator
    cout << date2;
    cout << date3;
    
    
    return 0;
}

    

