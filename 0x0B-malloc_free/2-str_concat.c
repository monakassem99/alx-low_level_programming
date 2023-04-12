#include "main.h"

/**
 * _strlen - find length of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int sz = 0;

	for (; s[sz] != '\0'; sz++)
	;
	return (sz);
}

/**
 * *str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, x;
	char *ch;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	ch = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (ch == 0)
		return (0);

	for (x = 0; x <= sz1 + sz2; x++)
	{
		if (x < sz1)
			ch[x] = s1[x];
		else
			ch[x] = s2[x - sz1];
	}

	ch[x] = '\0';

	return (ch);
}
