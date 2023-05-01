#include "lists.h"
/**
 * pop_listint - removes a node from the beginning of a list
 * @head: pointer to address of node
 * Return: node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!(*head))
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	/**head = malloc(sizeof(listint_t));*/
	if (!(*head))
		return (0);
	*head = node;
	return (n);
}
