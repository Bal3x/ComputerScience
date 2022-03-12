#include <iostream>
#include <stdlib.h>
#include "LotteryApplication.h"

using namespace::std;

int main() {
	int aSize = 5;

	Lottery todaysNumbers(aSize);

	todaysNumbers.displayUserArray();
	todaysNumbers.displayRandomArray();
	todaysNumbers.compareNumbers();

	return 0;
}
