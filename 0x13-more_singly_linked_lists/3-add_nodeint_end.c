#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to address of node
 * @n: node's data
 * Return: pointer to modified node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head, *node = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	while (ptr && ptr->next)
	{
		ptr = ptr->next;
	}
	if (!ptr)
	{
		*head = node;
		return (*head);
	}
	ptr->next = node;
	return (*head);
}
