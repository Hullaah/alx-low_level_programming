#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t i = 0;
	int status = 0;
	node = head;
        do
	{
		i++;
		status++;
		printf("[%p] %d\n", (void *) node->next, node->n);
		node = node->next;
	}while (node != head && node);
	return (i);
}
