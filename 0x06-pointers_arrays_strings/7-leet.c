#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * Replaces the characters 'a' and 'A' with '4', 'e' and 'E' with '3',
 * 'o' and 'O' with '0', 't' and 'T' with '7', and 'l' and 'L' with '1'.
 *
 * @str: str The string to encode.
 * Return: string
 */

char *leet(char *str)
{
	int i;
	unsigned char c;
	char leet_table[256] = {0};

	leet_table['a'] = '4';
	leet_table['A'] = '4';
	leet_table['e'] = '3';
	leet_table['E'] = '3';
	leet_table['o'] = '0';
	leet_table['O'] = '0';
	leet_table['t'] = '7';
	leet_table['T'] = '7';
	leet_table['l'] = '1';
	leet_table['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		c = (unsigned char)str[i];
		if (leet_table[c] != 0)
		{
			str[i] = leet_table[c];
		}
	}

	return (str);
}
