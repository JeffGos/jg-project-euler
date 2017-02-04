#include "problem3.h"

#include <iostream>
#include <cmath>
#include "primes.h"

void problem3BruteForce(long argument) {

	printf("Problem 3 - Brute Force\n");

	printf("Prime Factors below sqrt(%ld): [", argument);

	long factor = argument;
	long highestFactor = 1;

	while (factor % 2 == 0) {

		highestFactor = 2;
		factor /= 2;
		printf("2 ");
	}

	for (long divisor = 3; divisor < sqrt(argument) ; divisor+=2) {

		while (factor % divisor == 0) {

			highestFactor = divisor;
			factor /= divisor;
			printf("%ld ", divisor);
		}
	}

	printf("]\n");

	long highestFactor2 = argument / highestFactor;

	if (isPrime(highestFactor2)) {
		highestFactor = fmax(highestFactor, argument / highestFactor);
	}

	printf("Highest prime factor of %ld = %ld", argument, highestFactor);
}


