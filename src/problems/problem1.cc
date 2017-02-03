#include "problem1.h"

void problem1BruteForce() {

	printf("Problem 1 - Brute Force\n");	

	int max = 1000;
	int result = 0;

	for (int i = 0; i < max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}

	printf("Result = %d", result);
}

int getMultiples(int argument, int max) {

	int result = 0;
	int i = 0;
	int loops = (max - 1) / argument;

	while (i < loops) {

		int multiple = argument * (i + 1);

		result += multiple;
		i++;
	}	

	return result;
}

void problem1Multiples() {
	
	printf("Problem 1 - Multiples\n");	

	int result = 0;
	int max = 1000;

	result += getMultiples(3, max);
	result += getMultiples(5, max);
	result -= getMultiples(15, max);

	printf("Result = %d", result);	
}

