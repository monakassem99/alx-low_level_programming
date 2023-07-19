#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * starts from 1, 2
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long int a = 1, b = 2, c;

	printf("%lu, %lu, ", a, b);

	for (int i = 3; i <= 98; i++)
	{
		c = a + b;
		printf("%lu", c);

		if (i != 98)
		{
			printf(", ");
		}

		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}

