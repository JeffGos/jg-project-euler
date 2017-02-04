#include "problem2.h"

#include <iostream>

void problem2BruteForce(long upperLimit) {

	printf("Problem 2 - Brute Force\n");	

	int result = 0;

	int num1 = 1;
	int num2 = 2;
	int sum = 0;

	while (sum < upperLimit) {

		if (num2 % 2 == 0) {
			result += num2;
		}

		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}


	printf("Sum of Fibonnaci Numbers below %ld = %d", upperLimit, result);
}


