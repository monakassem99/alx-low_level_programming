#include "main.h"

/**
 * swap_int - swaps the value of *a and *b
 *
 * @a: the first int
 * @b: second int
 * return :0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
