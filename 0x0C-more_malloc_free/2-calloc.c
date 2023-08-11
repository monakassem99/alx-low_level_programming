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
	char *arr; /*char is used bec allocated memory for array of characters*/

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

	for (i = 0; i < len; i++)
	{
		arr[i] = 0; /*to set memory to zero, as calloc did*/
	}

	return (arr);
}
