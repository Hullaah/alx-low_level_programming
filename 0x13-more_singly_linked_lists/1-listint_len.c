#include "lists.h"
/**
 * listint_len - calculates the length of a list
 * @h: pointer to list
 * Return: list length
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t i = 0;

	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}
