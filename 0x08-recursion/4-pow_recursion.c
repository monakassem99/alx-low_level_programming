#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int variable
 * @y: int variable
 *
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int z = x;

	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	z = z * _pow_recursion(x, y - 1);

	return (z);
}
