#include "lists.h"
/**
 * sum_listint - sums all the data of a linked list
 * @head: pointer to list
 * Return: sum of list data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
