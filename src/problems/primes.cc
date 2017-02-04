#include "primes.h"
#include <cmath>
#include <iostream>

bool isPrime(long argument)
{
	long factor = argument;
	long highestFactor = 1;

	while (factor % 2 == 0) {
		return false;
	}

	for (long divisor = 3; divisor < sqrt(argument) ; divisor+=2) {

		while (factor % divisor == 0) {
			return false;
		}
	}

	return true;
}

void generatePrimeSieveEratosthenes(long upperLimit) {

	printf("Generate Eratosthenes Prime Sieve. Limit = %ld\n", upperLimit);	

	bool* isPrime = new bool[upperLimit];

	isPrime[0] = false;
	isPrime[1] = false;

	for (long i = 2; i < upperLimit; i++) {
		isPrime[i] = true;
	}

	for (long i = 2; i < sqrt(upperLimit); i++) {

		if (!isPrime[i]) {
			continue;
		}

		//eliminate multiples of i
		for (long j = i * 2; j < upperLimit; j += i ) {
			isPrime[j] = false;
		}
	}

	long count = 0;

	for (long i = 2; i < upperLimit; i++ ) {
		
		if (isPrime[i]) {
			//printf("%ld, ", i);
			count++;
		}
	}

	printf("\nTotal primes = %ld", count);

	delete [] isPrime;
}

void generatePrimeSieveSundaram(long upperLimit) {

	printf("Generate Sundaram Prime Sieve - Limit = %ld\n", upperLimit);	

	long n = (upperLimit - 2) / 2;

	bool* set = new bool[n + 1];

	set[0] = false;

	for (int i = 1; i <= n; i++) {

		set[i] = true;
	}

	long i = 1;
	long j = 1;
	long element = i + j + 2*i*j;

	while (element <= n) {

		set[element] = false;
		j++;
		
		if (i + j + 2*i*j > n) {
			i++;
			j = i;
		}

		element = i + j + 2*i*j;
	}

	long result = 1;
	//printf("\nPrimes: 2, ");

	for (long i=1; i <= n; i++) {

		if (set[i])
		{
			//printf("%ld, ", i * 2 + 1);
			result++;
		}
	}

	printf("\nTotal Primes = %ld", result);
}

