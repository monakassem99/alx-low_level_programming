#include "main.h"

/**
 * print_most_numbers - print 0 -9
 *		from 2 and 4 and you can
 *		only use _putchar twice
 * Return : Always 0 (success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		
		_putchar(n + '0');
	}
	_putchar('\n');
}
