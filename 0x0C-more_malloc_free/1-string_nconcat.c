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

/**
 * *_memcpy - copy memory area
 * @dest: memory area
 * @src: source
 * @n: length of source
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int fll;

	for (fll = 0; fll < n; fll++)
	{
		dest[fll] = src[fll];
	}
	return (dest);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer shall point to a newly allocated space in memory,
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_1 = 0, len_2 = 0, size = 0;
	char *fin_str = NULL;

	size = len_1 + len_2 + 1;
	fin_str = malloc(size);

	if (s1 != NULL)
	{
		len_1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		len_2 = _strlen(s2);
	}
	if (n >= len_2)
	{
		n = len_2;
	}
	if (fin_str == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		_memcpy(fin_str, s1, len_1);
	}
	if (s2 != NULL)
	{
		_memcpy(fin_str + len_1, s2, n);
	}
	fin_str[len_1 + n] = '\0';
	return (fin_str);
}
