#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to address of linked list
 * Return: pointer to reversed linked list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reversed_list = NULL, *ptr_tmp = NULL;

	while ((*head) != NULL)
	{
		ptr_tmp  = (*head)->next;
		(*head)->next = reversed_list;
		reversed_list = *head;
		*head = ptr_tmp;
	}
	*head = reversed_list;
	return (*head);
}
