#include "lists.h"
/**
 * print_listint - prints the numbers in a list
 * @h: pointer to list
 * Return: Number of nodes in list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	size_t i = 0;

	node = h;
	while (node)
	{
		i++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (i);
}
