#ifndef PRIMES_H
#define PRIMES_H

bool isPrime(long argument);

//Sieve of Eratosthenes (300 BC)
void generatePrimeSieveEratosthenes(long upperLimit);

//Sieve of Sundaram (1934)
void generatePrimeSieveSundaram(long upperLimit);

#endif