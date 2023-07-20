#include "main.h"

/**
 * print_triangle - prints a triangle with the given input
 *
 * @size: number to be printed
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int x, y, f;

	for (x = 0; x < size; x++)
	{
		for (y = x; y < size - 1; y++)
		{
			_putchar(' ');
		}
		for (f = 0; f < x + 1; f++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

