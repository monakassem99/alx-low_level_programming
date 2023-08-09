#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: string
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k, word_length = 0, word_count = 0;
	int start_index = i - word_length;
	char **words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
		i++;
	}
	if (words == NULL)
		return (NULL);
	i = 0, j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			word_length++;
		if ((str[i] == ' ' || str[i + 1] == '\0') && word_length > 0)
		{
			words[j] = (char *)malloc((word_length + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			strncpy(words[j], &str[start_index], word_length);
			words[j][word_length] = '\0';
			j++;
			word_length = 0;
		}
		i++;
	}
	words[word_count] = NULL;
	return (words);
}
