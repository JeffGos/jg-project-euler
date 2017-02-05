#include "problem3.h"

#include <iostream>
#include <cmath>
#include "primes.h"

void problem3BruteForce(long argument) {

	printf("Problem 3 - Brute Force\n");

	printf("Prime Factors below sqrt(%ld): [", argument);

	long quotient = argument;
	long highestFactor = 1;

	while (quotient % 2 == 0) {

		highestFactor = 2;
		quotient /= 2;
		printf("2 ");
	}

	for (long divisor = 3; divisor < sqrt(argument) ; divisor+=2) {

		while (quotient % divisor == 0) {

			highestFactor = divisor;
			quotient /= divisor;
			printf("%ld ", divisor);
		}
	}

	printf("]\n");

	long highestFactor2 = argument / highestFactor;

	if (highestFactor2 > highestFactor && isPrime(highestFactor2)) {

		highestFactor = highestFactor2;
	}

	printf("Highest prime factor of %ld = %ld", argument, highestFactor);
}


