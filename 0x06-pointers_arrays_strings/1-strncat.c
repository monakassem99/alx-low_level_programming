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
 * _strncat - concatenate 2 strings
 * @dest: destination string
 * @src: the source string
 * @n: number oof characters
 * Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	char *output = dest + _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		output[i] = src[i];
	}

	output[i] = '\0';

	return (dest);
}

