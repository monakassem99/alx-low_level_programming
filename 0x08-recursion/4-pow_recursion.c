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
	int result = 1;
	int i;

	for (i = 0; i < y; i++)
	{
		result *= x;
	}

	if (y < 0)
	{
		return (-1);
	}

	return (result);
}
