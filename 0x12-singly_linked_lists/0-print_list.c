#include "lists.h"
/**
 * print_list - prints the items of a list
 * @h: linked list
 * Return: amount of nodes
*/

size_t print_list(const list_t *h)
{
	list_t node = *h;
	list_t *node_ptr = &node;
	size_t i = 0;

	while (node_ptr)
	{
		if (node_ptr->str)
			printf("[%d] %s\n", node_ptr->len, node_ptr->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		node_ptr = node_ptr->next;
		i++;
	}
	return (i);
}
