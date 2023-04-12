#include "main.h"

/**
 * _strdup - returns a pointer to new allocated space in memory
 * that contain copy of string given as parameter
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int x = 0, sz = 0;
	char *ch;

	if (str == NULL)
		return (NULL);

	for (; str[sz] != '\0'; sz++)
	;

	/*+1 on the sz puts end of string ch*/

	ch = malloc(sz * sizeof(*str) + 1);

	if (ch == 0)
		return(NULL);
	else
	{
		for (; x < sz; x++)
			ch[x] = str[x];
	}

	return (ch);
}
