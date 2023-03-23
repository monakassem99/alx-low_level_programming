#include <unistd.h>
#include "main.h"

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: on success 1.
 *         on error. -1.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

