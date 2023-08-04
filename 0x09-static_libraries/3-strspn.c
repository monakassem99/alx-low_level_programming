#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string
 * @accept: bytes
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int fll, hll;

	for (fll = 0; s[fll] != '\0'; fll++)
	{
		for (hll = 0; accept[hll] != s[fll]; hll++)
		{
			if (accept[hll] == '\0')
				return (fll);
		}
	}
	return (fll);
}
