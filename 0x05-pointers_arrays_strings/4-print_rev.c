#include "main.h"

void print_rev(char *s)
{
	int i;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
		x++;
	for (i = x; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
