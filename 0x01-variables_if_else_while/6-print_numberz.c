#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main (void)
{
	for(int num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}
	putchar ('\n');
	return (0);
}