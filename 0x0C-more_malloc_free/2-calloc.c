#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array
 * @size: elements of array
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int len, i;
	char *arr;

	len = size * nmemb;
	arr = malloc(len);

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
