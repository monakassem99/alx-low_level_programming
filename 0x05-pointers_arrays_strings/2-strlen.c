#include "main.h"

/**
 * _strlen - prints the lenght of given string
 *
 * @s: the pointer of string
 * Return: length of string
 */

int _strlen(char *s)
{
	int n;
	int i = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		i++;
	}
	return (i);
}
