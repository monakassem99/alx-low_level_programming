#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	/* your code goes there */
	if (n > 0)
	{
		printf("Last digit of %d is %d ", n, lastdigit);
	}

	if (n < 0)
	{
		printf("Last digit of %d is %d", n, lastdigit);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d", n, lastdigit);
	}
	if (lastdigit > 5)
	{
		printf("and is greater than 5\n");
	}
	if (lastdigit == 0)
	{
		printf("and is 0\n");
	}
	if (lastdigit > 0 && lastdigit < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
