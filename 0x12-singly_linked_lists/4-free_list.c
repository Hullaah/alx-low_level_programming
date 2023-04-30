#include "lists.h"
/**
 * free_list - frees an allocated ptr to a singly linked list
 * @head: linked list
 * Return: void (does not have a return value)
*/
void free_list(list_t *head)
{
	list_t *node;
	char *string;

	if (head)
	{
		while (head)
		{
			node = head->next;
			string = head->str;
			free(string);
			free(head);
			head = node;
		}
	}
}
