#include "main.h"

/**
 * is_prime_helper - a recursive function that is used as a helper function
 * by the is_prime_number function to
 * determine if a given number is prime or not.
 * @n: number
 * @i: factor starts at 2
 * Return: prime numbers
 */

int is_prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}

/**
 * is_prime_number - returns the helper function
 * @n: number
 * Return: prime
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
