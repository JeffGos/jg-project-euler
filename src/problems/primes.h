#ifndef PRIMES_H
#define PRIMES_H

#include <iostream>
#include <set>

//Sieve of Eratosthenes (300B C)
std::set<long>* generatePrimeSieveEratosthenes(long upperLimit);

//Sieve of Sundaram (1934)
void generatePrimeSieveSundaram(long upperLimit);

#endif