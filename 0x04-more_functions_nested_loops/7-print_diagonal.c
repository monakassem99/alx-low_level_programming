#include "main.h"

/**
 * print_diagonal - prints a diagonal where
 *		n is number of /
 *@n: the user input
 *
 * return: nothing
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			_putchar(' ');
			if (y == x)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
	_putchar('\n');
}
