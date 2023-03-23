#include "main.h"

/**
 * print_numbers - print 0 - 9
 * numbers range 0 - 9
 * return 0
 */

void print_numbers(void)
{
	int x = 0;

	do {
		_putchar(x + 48);
		x++;
	} while (x >= 0 && x <= 9)
	_putchar('\n');
}
