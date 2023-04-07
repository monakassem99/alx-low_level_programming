#include "main.h"

int non_prime(int x, int y);

/**
 * non_prime - checks if a no. is divisible
 * @x: checked no.
 * @y: divisor
 *
 * Return: 0 or 1
 */

int non_prime(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}

	else if (y == x / 2)
	{
		return (1);
	}

	return (non_prime(x, y + 1));
}

/**
 * is_prime_number - checks prime no.
 * @n: no. to be checked
 *
 * Return: 0 or -1
 */

int is_prime_number(int n)
{
	int y = 2;

	if (n <= 1)
	{
		return (0);
	}

	else if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (non_prime(n, y));
}
