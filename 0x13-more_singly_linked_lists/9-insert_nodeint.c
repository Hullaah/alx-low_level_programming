#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at point specified by index
 * @head: pointer to address of list
 * @idx: point which node is to be inserted
 * @n: node's data
 * Return: pointer to modified node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int  i = 0;
	listint_t *node, *ptr = *head, *preptr = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	while (i != idx && ptr && ptr->next)
	{
		i++;
		preptr = ptr;
		ptr = ptr->next;
	}
	if (!ptr && i != idx)
		return (NULL);
	if (!ptr && i == idx)
	{
		*head = node;
		return (*head);
	}
	preptr->next = node;
	node->next = ptr;
	return (*head);
}
