#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{

	int size = max - min + 1;
	int *array = (int *)malloc(size * sizeof(int));
	int i;

	if (min > max)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
