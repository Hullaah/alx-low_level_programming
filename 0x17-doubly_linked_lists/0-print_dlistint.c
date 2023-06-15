#include "lists.h"
/**
 * print_dlistint - prints the element of a doubly linked list
 * @h: head of list
 * Return: number of elements printed
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t i = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
