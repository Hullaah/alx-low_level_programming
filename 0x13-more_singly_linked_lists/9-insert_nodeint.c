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

        if (!ptr && idx != 0)
                return (NULL);
        else if (ptr == NULL && idx == 0)
        {
                *head = node;
		return (*head);
        }
	while (i != idx && ptr->next)
	{
		i++;
		preptr = ptr;
		ptr = ptr->next;
	}
	preptr->next = node;
	node->next = ptr;
	return (*head);
}
