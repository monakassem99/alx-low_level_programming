#include "main.h"

/**
 * factorial - return factorial of given number
 * @n: int variable
 *
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
