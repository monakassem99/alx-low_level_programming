#include "main.h"

void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			if (y == x)
				_putchar('\\');
			else
				_putchar(' ');
		}
			_putchar('\n');
	}
	_putchar('\n');
}
