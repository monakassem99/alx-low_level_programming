#include "main.h"

/**
 * _strlen - prints the lenght of given string
 *
 * @s: the pointer of string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int n = _strlen(str);
	int i;

	if (n % 2 == 0)
	{
		for (i = n / 2; i < n; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

	else
	{
		for (i = (n - 1) / 2; i < n; i++)
		{
			_putchar(str[i + 1]);
		}
		_putchar('\n');
	}
}
