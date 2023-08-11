#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array
 * @size: elements of array
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int len = 0;

	char *arr;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	len = size * nmemb;
	arr = malloc(len);
	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
