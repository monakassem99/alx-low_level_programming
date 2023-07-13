#include <stdio.h>

/*
 * main: fibonacci: prints the first 50 fibonacci numbers
 * return: 0
 */

int main(void)
{
	int i;
	long int fibb[50];

	fibb[0] = 0;
	fibb[1] = 1;
	for (i = 2; i < 50; i++)
	{
		fibb[i] = fibb[i - 1] + fibb[i - 2];
		printf("%ld", fibb[i]);
		if (fibb[i] != fibb[49])
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

