#include "main.h"

/**
 * create_array - creates an array of chars,
 * intialize specific char
 * @size: size of array
 * @c: char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		x[size] = c;

	return (n);
}
