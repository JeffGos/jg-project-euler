#include <iostream>
#include "./problems/problem1.h"
#include "time.h"

using namespace std;

int main ()
{
	clock_t start;

	printf("\nPROJECT EULER SOLUTIONS\n");

	printf("===========================\n\n");
	start = clock();
	problem1BruteForce();
	printf(" [duration = %lu ticks]\n\n", clock() - start);

	start = clock();
	problem1Multiples();
	printf(" [duration = %lu ticks]\n\n", clock() - start);

	printf("===========================\n\n");

	return 0;
}
