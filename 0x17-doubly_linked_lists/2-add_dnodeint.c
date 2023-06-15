#include "lists.h"
/**
 * add_dnodeint - prepends a node to a doubly linked list
 * @head: pointer to head of node
 * @n: node element
 * Return: head of modified list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (*head);
}
