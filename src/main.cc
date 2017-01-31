#include <iostream>
#include "./problems/problem1.h"
#include "time.h"

using namespace std;

int main ()
{
	clock_t start, end;

	printf("\nPROJECT EULER SOLUTIONS\n");

	printf("===========================\n\n");
	start = clock();
	problem1BruteForce();
	end = clock();
	printf(" [duration = %lu ticks]\n\n", end - start);

	start = clock();
	problem1Multiples();
	end = clock();
	printf(" [duration = %lu ticks]\n\n", end - start);

	printf("===========================\n\n");

	return 0;
}
