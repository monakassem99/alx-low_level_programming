#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _character
 *		should be printed
 */

void print_line(int n)
{
	int z;

	for (z = 1; z <= n; z++)
	{
		if (n > 0)
		_putchar('_');
	}
	_putchar('\n');
}
