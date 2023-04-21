#include "variadic_functions.h"

/**
 * print_strings - print string with separator
 * @separator: string separator
 * @n: no of arguments
 * @...: strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *str;
	va_list z;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(z, n);
	while (x--)
		printf("%s%s", (str = va_arg(z, char *)) ? str : "(nil)",
				x ? (separator ? separator : "") : "\n");
	va_end(z);

}
