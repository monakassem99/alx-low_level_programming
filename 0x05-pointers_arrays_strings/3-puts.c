#include "main.h"

/**
 * _puts - print the string characters
 * by using int i
 * @str: string parameter to print
 * return : 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
