#include "problem1.h"

#include <iostream>

void problem1BruteForce(long upperLimit) {

	printf("Problem 1 - Brute Force\n");

	int multiplesOf3And5Count = 0;

	for (int i = 0; i < upperLimit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			multiplesOf3And5Count += i;
		}
	}

	printf("Multiples of 3 and 5 below %ld = %d", upperLimit, multiplesOf3And5Count);
}

int getMultiples(int argument, int upperLimit) {

	int multiplesCount = 0;
	int i = 1;
	int loops = (upperLimit - 1) / argument;

	while (i <= loops) {

		int multiple = argument * i;

		multiplesCount += multiple;
		i++;
	}	

	return multiplesCount;
}

void problem1Multiples(long upperLimit) {
	
	printf("Problem 1 - Multiples\n");	

	int multiplesOf3And5Count = 0;

	multiplesOf3And5Count += getMultiples(3, upperLimit);
	multiplesOf3And5Count += getMultiples(5, upperLimit);
	multiplesOf3And5Count -= getMultiples(15, upperLimit);

	printf("Multiples of 3 and 5 below %ld = %d",  upperLimit, multiplesOf3And5Count);	
}

