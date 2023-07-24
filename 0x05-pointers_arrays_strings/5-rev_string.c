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
 * rev_string - reverse a string.
 *
 * @s: the string to be reversed.
 */

void rev_string(char *s)
{

	int len = _strlen(s);
	int i;
	char rev;

	for (i = 0; i < len / 2; i++)
	{
		rev = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = rev;
	}
}
