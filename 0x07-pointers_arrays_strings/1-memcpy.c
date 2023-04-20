#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: memory area
 * @src: source
 * @n: length of source
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int fll;

	for (fll = 0; fll < n; fll++)
	{
		dest[fll] = src[fll];
	}
	return (dest);
}
