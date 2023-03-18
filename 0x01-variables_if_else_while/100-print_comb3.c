#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');

			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
