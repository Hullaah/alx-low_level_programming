#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *preptr = *head;
	int i = 0;

	while (i != index && ptr && ptr->next)
	{
		preptr = ptr;
		ptr = ptr->next;
	}
	if ((!ptr || !ptr->next) && i == index)
}
