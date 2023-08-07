#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string
 * Return: pointer to the duplicated string
 * and NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	size_t len = strlen(str) + 1;
	void *new = malloc(len);

	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	return ((char *)memcpy(new, str, len));
}
