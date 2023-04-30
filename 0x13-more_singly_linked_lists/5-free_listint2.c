#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to address of list
 * Return: void (does not have a return value)
*/
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	head = NULL;
}
