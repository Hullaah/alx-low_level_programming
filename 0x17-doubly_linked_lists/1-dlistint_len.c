#include "lists.h"
/**
 * dlistint_len - calculates the length of a linked list
 * @h: head of linked list
 * Return: length of linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t i = 0;

	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
