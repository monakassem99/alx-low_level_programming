#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer shall point to a newly allocated space in memory,
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_1 = 0, len_2 = 0;
	char *fin_str;

	if (s1 != NULL)
	{
		len_1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len_2 = strlen(s2);
	}
	len_2 = (len_2 > n ? n : len_2);
	fin_str = malloc(len_1 + len_2 + 1);
	if (fin_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_1; i++)
	{
		fin_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		fin_str[j + i] = s2[j];
	}
	fin_str[j + i] = '\0';
	return (fin_str);
}
