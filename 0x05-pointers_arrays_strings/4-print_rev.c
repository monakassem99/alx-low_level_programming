#include "main.h"

/**
 * print_rev - prints reversed string
 * @s : points to the string to be printed
 * return : void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
