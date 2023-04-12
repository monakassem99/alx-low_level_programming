#include "main.h"

/**
 * _strlen - find length of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int sz = 0;

	for (; s[sz] != '\0'; sz++)
	;
	return (sz);
}

/**
 * *argstostr - desc
 * @ac: int
 *
 * @av: argum
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int x = 0, nc = 0, y = 0, cmpt = 0;
	char *ch;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; x < ac; x++, nc++)
		nc += _strlen(av[x]);

	ch = malloc(sizeof(char) * nc + 1);
	if (ch == 0)
		return (NULL);

	for (x = 0; x < nc; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, cmpt++)
			ch[cmpt] = av[x][y];
		ch[cmpt] = '\n';
		cmpt++;
	}
	ch[cmpt] = '\0';
	return (ch);
}
