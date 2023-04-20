#include "main.h"

/**
 * *_memset - fill memory with const byte
 * @s: pointer of const
 * @b: const
 * @n: maximum bytes
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int fll;

	for (fll = 0; n > 0; fll++, n--)
	{
		s[fll] = b;
	}

	return (s);
}
