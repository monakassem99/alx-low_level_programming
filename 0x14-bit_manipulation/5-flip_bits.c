#include "main.h"
/**
 * countSetBits - .....
 * @n: ...
 * Return: .....
 */

int countSetBits(unsigned long int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - .....
 * @n: ....
 * @m: ....
 * Return: ....
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;

	return (countSetBits(flipped));
}
