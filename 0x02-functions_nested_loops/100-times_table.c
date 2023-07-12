#include "main.h"

/*
 * print_times_table - prints n times table according to the input value
 * of the user since it is less than 15
 * n: variable to be printed
 * x: variable
 * y: variable
 * z: variable
 * return: ...
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				z = x * y;
				if (z <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (z > 99)
				{
					_putchar((z / 100) + '0');
					_putchar((z % 10) + '0');
				}
				if (z > 9 && z <= 99)
				{
					_putchar(' ');
					_putchar((z / 10) + '0');
				}
				_putchar((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
