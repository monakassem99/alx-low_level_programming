#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can onlyy use _putchar three times
 *
 * Return : Always 0 (Success)
 */

void more_numbers(void)
{
	int x, n;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');

		}
		_putchar('\n');

	}
}
