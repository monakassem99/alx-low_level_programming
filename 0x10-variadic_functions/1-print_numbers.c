#include "variadic_functions.h"

/**
 * print_numbers - print no with separator
 * @separator: string separator
 * @n: no of arguments
 * @...: integers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list z;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(z, n);
	while (x--)
		printf("%d%s", va_arg(z, int),
			x ? (separator ? separator : "") ; "\n");
	va_end(z);
}
