#include "lists.h"
/**
 * dlistint_length - calculates the length of a linked list
 * @h: head of linked list
 * Return: length of linked list
*/
size_t dlistint_length(dlistint_t *h)
{
	dlistint_t *ptr = h;
	size_t i = 0;

	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

/**
 * get_dnodeint_at_index - gets the node specified by index from head
 * @head: head of linked list
 * @index: indexof node to be got
 * Return: gotten node or NULL if unsuccessful
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t list_len = dlistint_length(head), i = 0;
	dlistint_t *ptr = head;

	if (index >= list_len)
		return (NULL);
	while (i != index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
