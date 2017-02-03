#include <iostream>
#include "time.h"

#include "./problems/problem1.h"
#include "./problems/problem2.h"
#include "./problems/problem3.h"
#include "./problems/primes.h"

using namespace std;

void printDuration(clock_t start) {

	printf(" [duration = %f seconds]\n\n", ((double) (clock() - start)) / CLOCKS_PER_SEC);
}

int main () {

	clock_t start;

	printf("\nPROJECT EULER SOLUTIONS\n");

	printf("===========================\n\n");

	start = clock();
	problem1BruteForce();
	printDuration(start);

	start = clock();
	problem1Multiples();
	printDuration(start);

	start = clock();
	problem2BruteForce();
	printDuration(start);

	start = clock();
	problem3BruteForce();
	printDuration(start);

	start = clock();
	//generatePrimeSieveEratosthenes(600851475143);
	generatePrimeSieveEratosthenes(1000000);
	printDuration(start);

	start = clock();
	generatePrimeSieveSundaram(1000000);
	printDuration(start);


	printf("===========================\n\n");

	return 0;
}
