#include "main.h"

/**
 * print_number - prints an integer
 *@n: number to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}

