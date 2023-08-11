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
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer shall point to a newly allocated space in memory,
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_1, len_2, size;
	char *fin_str;

	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	size = len_1 + len_2 + 1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	fin_str = malloc(size);
	if (fin_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_1; i++)
	{
		fin_str[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		fin_str[len_1 + i] = s2[i];
	}

	fin_str[size - 1] = '\0';

	return (fin_str);
}
