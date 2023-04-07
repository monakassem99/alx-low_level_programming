#include "main.h"

int result_sqrt(int i, int r);
/**
 * result_sqrt - finds the square root of input
 * @i: no. to find the square root
 * @r: root to be tested
 *
 * Return: square root
 */

int result_sqrt(int i, int r)
{
	if ((r * r) == i)
	{
		return (r);
	}

	if (r == i / 2)
	{
		return (-1);
	}

	return (result_sqrt(i, r + 1));
}

/**
 * _sqrt_recursion - return natural square root of given no.
 * @n: the given no.
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 1)
	{
		return (1);
	}

	return (result_sqrt(n, r));
}
