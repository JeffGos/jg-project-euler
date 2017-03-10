#include "3nplus1.h"

#include <iostream>
#include <cmath>

void threeNPlusOne(int lowerBound, int upperBound) {

	printf("Three N Plus One\n");	
	printf("%d %d ", lowerBound, upperBound);

	int maxCycleLength = 0;

	for (int n = lowerBound; n <= upperBound; n++) {
	
		maxCycleLength = fmax(maxCycleLength, getCycleLength(n));
	}

	printf("%d\n\n", maxCycleLength);
}

int getCycleLength(int n) {

	int length = 1;

	while (n > 1) {

		if (n % 2 == 1) {
			
			n = (n * 3) + 1;
		}
		else {
			
			n /= 2;
		}

		length++;
	}

	return length;
}
