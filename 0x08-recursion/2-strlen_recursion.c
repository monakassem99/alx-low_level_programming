#include "main.h"

/**
 * _strlen_recursion - counts the string
 * @s: char variable
 *
 * Return: n
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		n = n + _strlen_recursion(s + 1);
	}

	return (n);
}
