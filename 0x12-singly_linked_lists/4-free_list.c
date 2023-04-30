#include "lists.h"

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
