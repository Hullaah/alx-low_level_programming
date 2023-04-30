#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to list to be freed
 * Return: void (does not have a return value)
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
