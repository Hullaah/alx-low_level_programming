#include "lists.h"
/**
 * add_dnodeint_end - appends a node to a doubly linked list
 * @head: list head
 * @n: node element
 * Return: modified list head
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *ptr = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node || !head)
		return (NULL);
	while (ptr && ptr->next)
		ptr = ptr->next;
	node->next = NULL;
	node->prev = ptr;
	node->n = n;
	if (ptr)
		ptr->next = node;
	else
		*head = node;
	return (*head);
}
