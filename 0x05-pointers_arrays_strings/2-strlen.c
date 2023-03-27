#include "main.h"

int _strlen(char *s)
{
	int n;
	int i = 0;

	for (n = 0; s [n] != '\0'; n++)
	{
		i++;
	}
	return (i);
}
