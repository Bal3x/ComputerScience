#include <iostream>
#include "Point.h"
using namespace::std;


int main(){
    const int MAX_CAPACITY = 10;
    int n;
    int aX, aY;
    
    Point myArrayOfPoints[MAX_CAPACITY];
    
    cout << "Entre la cantidad de puntos para analizar el cuadrante (< 10): " << endl;
    cin >> n;
    for (int i = 0; i <= n; i++){`  
        cout << "Enter the X point " << i + 1 << ": " << endl;
        aX = myArrayOfPoints[i]
        cout << "Enter the Y point for: " << i + 1 << ": " << endl;
        aY = myArrayOfPoints[i]
    }
    
    system("pause");
    return 0;

}   

