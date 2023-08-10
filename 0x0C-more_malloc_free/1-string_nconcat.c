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

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t totalLen = len1 + n;
	char *concatenated = (char *)malloc((totalLen + 1) * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;

	if (concatenated == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		return (NULL);
	}
	strcpy(concatenated, s1);
	strncat(concatenated, s2, n);
	return (concatenated);
}
