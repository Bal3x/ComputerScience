#include <iostream>
#include <stdlib.h>
#include "LotteryApplication.h"

using namespace::std;

int main() {
	const int aSize = 5;

	Lottery myNumbers(aSize);

	myNumbers.displayRandomArray();
	myNumbers.displayUserArray();
	myNumbers.compareArrays();
	cout << endl;

	return 0;
}
