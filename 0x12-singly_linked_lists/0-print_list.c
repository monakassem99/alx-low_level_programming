#include "lists.h"

/**
 * print_list - print all elements in list
 * @h: first node
 * Return: no. of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	for (; current != NULL; current = current->next, nodes++)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
	}
	return (nodes);
}
