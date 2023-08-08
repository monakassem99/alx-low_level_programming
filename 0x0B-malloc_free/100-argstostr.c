#include "main.h"

char *argstostr(int ac, char **av)
{
	int i;
	size_t index = 0;
	size_t total_length = 0;
	char *result = (char *)malloc((total_length + 1) * sizeof(char));

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		size_t arg_length = strlen(av[i]);
		strcpy(result + index, av[i]);
		index += arg_length;
		result[index++] = '\n';
	}

	result[total_length] = '\0';
	return (result);
}
