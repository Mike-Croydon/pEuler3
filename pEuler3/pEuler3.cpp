// This program solves Project Euler problem 3: Largest Prime Factor
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include "EulerLib.h"

using namespace std;
/*
//This function checks if a number is prime
bool primeCheck(int n)
{
	for (int i = 2; i < n; i++)
	{
		if ((n % i) == 0)
		{
			return false;
		}
	}
	return true;
}

//This function simply checks every number starting at p to see if it's prime. It will return the next higher prime number
int nextHighestPrime(int p)
{
	//cout << "nextHighestPrime() called" << endl;
	p++;
	EulerLib::Primes pObj = EulerLib::Primes();
	while (!(pObj.isPrime(p)))
	{
		p++;
	}
	return p;
}
*/

int main()
{
	long long int num = 600851475143;
	long int largestPrime = 0;
	long int pFactor = 2;

	//This loop iterates through all prime numbers checking if each one is a prime factor. It terminates when the prime being test is > the number itself
	while ((num >= pFactor))
	{			
		//if pFactor is a prime factor of num this will return true, and it will be the new largest prime factor
		if ((num%pFactor) == 0)
		{
			largestPrime = pFactor;
			num = num / pFactor;
			cout << "num = " << num << endl;
			cout << "pFactor = " << pFactor << endl;
		}
		else
		{
			pFactor = EulerLib::Primes::nextHighestPrime(pFactor); //if pFactor was not an a prime factor, we call nextHighestPrime() and test the next highest prime
		}
	}
	
	cout << "The largest prime factor of 600,851,475,143 is " << largestPrime;



}

