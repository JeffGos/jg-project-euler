#include "primes.h"
#include <cmath>

std::set<long>* generatePrimeSieveEratosthenes(long upperLimit) {

	printf("Generate Eratosthenes Prime Sieve. upperLimit = %ld\n", upperLimit);	

	//std::set<long>* result = new std::set<long>();
	//std::set<long>* nonPrimes = new std::set<long>();

	bool* isPrime = new bool[upperLimit];

	isPrime[0] = false;
	isPrime[1] = false;

	for (long i = 2; i < upperLimit; i++) {
		isPrime[i] = true;
	}

	//for i = 2, 3, 4, ..., not exceeding √n
	//for (long i = 2; i < upperLimit; i++) {
	for (long i = 2; i < sqrt(upperLimit); i++) {

		//if (nonPrimes->find(i) != nonPrimes->end()) {
		if (!isPrime[i]) {
			continue;
		}

		//eliminate i2, i2+i, i2+2i, i2+3i, ..., not exceeding upperLimit
		//for (long j = i * 2; j < (upperLimit / i) + 1; j++) {

		for (long j = i * 2; j < upperLimit; j += i ) {
			//printf("%ld, ", j);
			//nonPrimes->insert(j);	
			isPrime[j] = false;
		}

		//result->insert(i);

		//printf("\np=%ld\n", i);
	}

	long count = 0;

	for (long i = 2; i < upperLimit; i++ ) {
		
		if (isPrime[i]) {
			//printf("%ld, ", i);
			count++;
		}
	}

	printf("\nTotal primes = %ld", count);

	//for (std::set<long>::iterator it = result->begin(); it != result->end(); it++) {
	//	printf("%ld, ", *it);
	//}

	delete [] isPrime;

	return 0;
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
	printf("\nPrimes: 2, ");

	for (long i=1; i <= n; i++) {

		if (set[i])
		{
			printf("%ld, ", i * 2 + 1);
			result++;
		}
	}

	printf("\nPrime Count = %ld", result);
}

