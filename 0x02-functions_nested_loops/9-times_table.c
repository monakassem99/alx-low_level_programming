#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
 *
 * return: ...
 */

void times_table(void)
{
	int a, b, c;
	
	for (a = 0; a <= 9; a++)
	{
		putchar('0');
		
		for (b = 1; b <= 9; b++)
		{
			putchar(',');
			putchar(' ');
			
			c = a * b;
			
			if (c <= 9)
				putchar(' ');
			else
				putchar((c / 10) + '0');
			putchar((c % 10) + '0');
		}
		
		putchar('\n');
	}
}
