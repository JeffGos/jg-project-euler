#include "problem2.h"

void problem2BruteForce() {

	printf("Problem 2 - Brute Force\n");	

	int result = 0;

	int max = 4000000;
	int num1 = 1;
	int num2 = 2;
	int sum = 0;

	while (sum < max) {

		if (num2 % 2 == 0) {
			result += num2;
		}

		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}


	printf("Result = %d", result);
}


