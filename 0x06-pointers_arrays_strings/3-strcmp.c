#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if true, 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
		if (*s1 == '\0')
			return (0);
	return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1);
}

