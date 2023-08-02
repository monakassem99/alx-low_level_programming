#include "main.h"

/**
 * is_palindrome_helper - helps is_palindrome function
 * @s: string to be checked
 * @start: starting index
 * @end: ending index
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
