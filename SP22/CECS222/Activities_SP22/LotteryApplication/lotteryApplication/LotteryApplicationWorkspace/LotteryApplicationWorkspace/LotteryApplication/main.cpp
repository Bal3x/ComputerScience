#include <iostream>
#include <stdlib.h>
#include "Lottery.h"

using namespace::std;

int main() {
	int aSize = 5;
    int dSize = 0;
    int rNumbers[aSize];
    int uNumbers[aSize];
    int matchedNumbers[]{0};
   
    Lottery todaysNumbers(uNumbers, rNumbers, aSize);

	todaysNumbers.displayUserArray();
	todaysNumbers.displayRandomArray();
	todaysNumbers.compareNumbers(matchedNumbers, dSize);

	return 0;
}
    

