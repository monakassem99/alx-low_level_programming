#include "main.h"

/**
 * main - print the result of the addition of numbers, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, num, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *number = argv[i];

		for (j = 0; number[j] != '\0'; j++)
		{
			if (!isdigit(number[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(number);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
