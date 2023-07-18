#include "main.h"

/**
 * _strlen - prints the lenght of given string
 *
 * @s: the pointer of string
 * Return: length of string
 *
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
 * print_rev - prints reversed string
 * @s : points to the string to be printed
 * return : void
 *
 */

void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/*another answer*/
/**
 * print_rev - prints reversed string
 * @s : points to the string to be printed
 * return : void
 *
 *
 *void print_rev(char *s)
 *{
 *	int i = 0;
 *
 * while (s[i])
 *		i++;
 *
 *	while (i--)
 *	{
 *		_putchar(s[i]);
 *	}
 *	_putchar('\n');
 *}
 */
