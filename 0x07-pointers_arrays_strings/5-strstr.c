#include "main.h"

/**
 * _strstr -  finds the first occurrence of
 *  the substring needle in the string haystack
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;
		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
