#include "lists.h"

size_t list_len(const list_t *h)
{
	const list_t *node = h;
	size_t i = 0;

	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}