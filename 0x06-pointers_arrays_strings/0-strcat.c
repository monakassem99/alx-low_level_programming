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
 * _strcat - concatenate 2 strings
 * @dest: destination
 * @src: the source string
 * Return: the destination string
 */

char *_strcat(char *dest, char *src)
{
	char *output = dest + _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		output[i] = src[i];
	}

	output[i] = '\0';

	return (dest);
}

