#include <stdio.h>

/**
 * main - prints largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int n, div = 2, maxfac;

	n = 612852475143;

	while (n > 0)
	{
		if (n % div != 0)
		{
			div++;
		}
		else
		{
			maxfac = n;
			n /= div;
		}
		if (n == 1)
		{
			printf("%ld\n", maxfac);
			break;
		}
	}

	return (0);
}

