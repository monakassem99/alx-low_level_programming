#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers ending with 98
 *@n: is the natural number
 *return : always 0
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
