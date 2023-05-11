#include "main.h"
#include <stdio.h>

/**
 *is_prime_number -  returns 1 if the input integer is a prime number
 *@n : input
 *return : int value
 */

int check_prime(int n, int i);

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 *check_prime - check if num is prime
 *@n :input
 *@i : iteration
 *return : 1 if prime
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
