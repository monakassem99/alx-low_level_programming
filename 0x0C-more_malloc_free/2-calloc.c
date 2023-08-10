#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array
 * @size: elements of array
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
