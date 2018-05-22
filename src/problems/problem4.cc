#include "problem4.h"

#include <iostream>
#include <math.h>

bool isPalindrome(int number) {

	
}

void problem4BruteForce(short digitCount) {

	// Generate result of 2 multiples and 
	// then check if it is a palindrome
	printf("Problem 4 - Brute Force\n");

	int upperLimit = pow(10, digitCount) - 1;
	int lowerLimit = pow(10, digitCount - 1);

	for (int i = upperLimit; i >= lowerLimit; i-- ) {
		
		for (int j = upperLimit; j >= lowerLimit; j-- ) {


		}
	}
}

void problem4CheckPalindromes(short digitCount) {

	// Run through the palindromes (high to low) 
	// and find whole quotient equal to divisor
	printf("Problem 4 - Brute Force\n");	

	int palindromeDigitCount = digitCount * 2;
	
	int upperLimit = pow(10, digitCount);

	int* palindromeDigitsArray = new int [palindromeDigitCount];

	for (int i = 0; i < palindromeDigitCount; i++) {
		
		palindromeDigitsArray[i] = 9;
	} 

	while (true) {
		
		for (int i = 0; i < palindromeDigitCount / 2 + 1; i ++) {

			for (int digit = 9; digit > 0; digit--) {

					
			}
		}

		int palindrome = 0;

		for (int i = 0; i < palindromeDigitCount; i++) {

			//palindrome += palindromeDigitsArray
		}
	}
}


