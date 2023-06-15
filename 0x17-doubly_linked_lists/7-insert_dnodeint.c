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
/**
 * insert_dnodeint_at_index - insert a node in a linked list at index
 * specified by idx
 * @h: linked list head
 * @idx: index
 * @n: element
 * Return: linked list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t list_len, i = 0;
	dlistint_t *node, *ptr = *h;

	if (!h)
		return (NULL);
	list_len = dlistint_length(*h);
	if (idx >= list_len)
		return (NULL);
	else if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	else if (idx == list_len - 1)
	{
		add_dnodeint_end(h, n);
		node = get_dnodeint_at_index(*h, list_len);
		return (node);
	}
	else
	{
		while (i != idx)
		{
			ptr = ptr->next;
			i++;
		}
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);
		ptr->prev->next = node;
		node->next = ptr;
		node->prev = ptr->prev;
		ptr->prev = node;
		node->n = n;
	}
	return (node);
}
