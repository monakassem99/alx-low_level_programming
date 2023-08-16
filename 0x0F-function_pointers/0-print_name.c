#include "function_pointers.h"

/**
 * print_name - prints a name
 *@name: name
 *@f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * print_with_newline - njxnm
 * @name: name
 * Return: jhnjj
 */
void print_with_newline(char *name)
{
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
/**
 * print_with_dashes - xjnn
 * @name: name
 * Return: nnn
 */
void print_with_dashes(char *name)
{
	int i;

	int length = 0;
	char *temp = name;

	while (*temp != '\0')
	{
		length++;
		temp++;
	}

	for (i = 0; i < length; i++)
	{
		_putchar('-');
	}
	_putchar('\n');

	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');

	for (i = 0; i < length; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
