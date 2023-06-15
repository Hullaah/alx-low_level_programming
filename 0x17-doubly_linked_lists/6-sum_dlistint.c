#include "lists.h"
/**
 * sum_dlistint - calculates the sum of the elements in a linked list
 * @head: list head
 * Return: sum of values of linked list
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
