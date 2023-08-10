#include "main.h"

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char.
 * @size: size
 * @c: char
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;							 /*we used unsigned bec size is unsigned too*/
	char *arr = malloc(size * sizeof(char)); /*allocate memory for the array*/

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c; /*intialize every element with the specifiec character*/
	}
	return (arr);
}
