#include <stdio.h>
/*
 *
 */
int main(void)
{
	int i;
	long int fibb[50];
	long int sum;

	sum = 0;
	fibb[0] = 1;
	fibb[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibb[i] = fibb[i - 1] + fibb[i - 2];
		if (fibb[i] > 4000000)
		{
			break;
		}
		if (fibb[i] % 2 == 0)
		{
			sum = sum + fibb[i];
		}
	}
	printf("%ld", sum + fibb[1]);
	printf("\n");

	return (0);
}
