#include "main.h"
/**
 *  _sqrt_recursion_helper - returns square root of a number
 * @n: number
 * @start: index
 * @end: index
 * Return: the natural square root of n if it exists, otherwise -1
 */

int _sqrt_recursion_helper(long int n, long int start, long int end)
{
	long int mid;
	long int square;

	mid = (start + end) / 2;
	square = mid * mid;
	if (start > end)
	{
		return (-1);
	}

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 1, n));
}
