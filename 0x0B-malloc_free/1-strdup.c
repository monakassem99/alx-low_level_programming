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

	size_t length = strlen(str);
	char *duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	free(duplicate);
	return (duplicate);
}
