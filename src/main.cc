#include <iostream>
#include "time.h"

#include "./problems/problem1.h"
#include "./problems/problem2.h"
#include "./problems/problem3.h"
#include "./problems/problem4.h"
#include "./problems/primes.h"

#include "./other/3nplus1.h"

using namespace std;

void printDuration(clock_t start) {

	printf(" [%f seconds]\n\n", ((double) (clock() - start)) / CLOCKS_PER_SEC);
}

int main () {

	clock_t start;

	printf("===========================\n\n");
	printf("PROJECT EULER SOLUTIONS\n\n");

	start = clock();
	problem1BruteForce(1000);
	printDuration(start);

	start = clock();
	problem1Multiples(1000);
	printDuration(start);

	start = clock();
	problem2BruteForce(400000000);
	printDuration(start);

	start = clock();
	problem2SelectiveAddition(400000000);
	printDuration(start);

	start = clock();
	problem3BruteForce(600851475143);
	printDuration(start);

	start = clock();
	problem4BruteForce(2);
	printDuration(start);

	printf("===========================\n\n");

	printf("PLAYING WITH PRIMES\n\n");

	start = clock();
	generatePrimeSieveEratosthenes(1000000);
	printDuration(start);

	start = clock();
	generatePrimeSieveSundaram(1000000);
	printDuration(start);

	printf("\n===========================\n\n");

	printf("OTHER PROBLEMS\n\n");

	start = clock();
	threeNPlusOne(1, 100000);
	printDuration(start);

	printf("\n===========================\n\n");

	return 0;
}
