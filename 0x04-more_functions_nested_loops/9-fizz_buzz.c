#include "stdio.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if (x % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (x % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", x);
	}
	printf("\n");
	return (0);
}

