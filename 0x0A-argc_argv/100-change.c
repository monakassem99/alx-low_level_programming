#include "main.h"

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cents, num_coins, num_coin_values, i;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;
	num_coin_values = sizeof(coin_values) / sizeof(coin_values[0]);

	for (i = 0; i < num_coin_values; i++)
	{
		num_coins += cents / coin_values[i];
		cents %= coin_values[i];
	}

	printf("%d\n", num_coins);
	return (0);
}
