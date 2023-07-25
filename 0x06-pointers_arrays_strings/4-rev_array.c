#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int rev;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = rev;
	}
}
