#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at point specified by index
 * @head: list
 * @index: node index
 * Return: void (does not have a return value)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node && i != index)
	{
		i++;
		node = node->next;
	}
	return (node);
}
