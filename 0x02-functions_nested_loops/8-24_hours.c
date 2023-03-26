#include "main.h"

/**
 * jack_bauer function prints every
 *		minute of the day
 *
 *@a is the hours and
 *@b is the minutes
 * Return : always 0
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(':');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar('\n');
		}
	}
}
