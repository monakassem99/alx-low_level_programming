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
	int n = 10;
	for (x = 0; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			if (y == x)
			{
				putchar('\\');
			}
			putchar(' ');
			if (n <= 0)
			{
				putchar('\n');
			}
		}
		putchar('\n');
	}
}
