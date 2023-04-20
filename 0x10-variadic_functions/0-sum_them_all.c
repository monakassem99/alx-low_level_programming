#include "variadic_functions.h"

/**
 * sum_them_all - sums var arguments
 * @n: no of arguments
 * @...: integers to be summed
 *
 * Return: sum of integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int x = 0, y = n;
	va_list z;

	if (!n)
		return (0);
	va_start(z, n);
	while (y--)
		x += va_arg(z, int);
	va_end(z);

	return (x);
}
