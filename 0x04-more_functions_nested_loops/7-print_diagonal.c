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
	for (x = 0; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			if (y == x)
			{
				_putchar('\\');
			}
			_putchar(' ');
			if (n = 0 )
			{
				_putchar('\n');
			}
			if (n < 0)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
