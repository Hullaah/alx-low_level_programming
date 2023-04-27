#include "lists.h"
/**
 * print_list - prints the items of a list
 * @h: linked list
 * Return: amount of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *node = h;
	size_t i = 0;

	while (node)
	{
		if (node->str)
			printf("[%d] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");
		node = node->next;
		i++;
	}
	return (i);
}
