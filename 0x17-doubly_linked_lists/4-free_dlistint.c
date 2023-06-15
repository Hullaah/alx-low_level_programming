#include "lists.h"
/**
 * free_dlistint - fress a doubly linked list
 * @head: linked list head
 * Return: void (does not have a return value)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	if (ptr)
	{
		free(ptr);
		free_dlistint(ptr->next);
	}
}
