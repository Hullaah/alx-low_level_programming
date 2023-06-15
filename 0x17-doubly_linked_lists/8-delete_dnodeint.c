#include "lists.h"
/**
 * dlistint_length - calculates the length of a linked list
 * @h: head of linked list
 * Return: length of linked list
*/
size_t dlistint_length(dlistint_t *h)
{
	dlistint_t *ptr = h;
	size_t i = 0;

	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
/**
 * delete_dnode - deletes the node at the beginning of a linked list
 * @head: pointer to head of linked list
 * Return: 1
*/
int delete_dnode(dlistint_t **head)
{
	dlistint_t *tmp;

	if (!(*head))
		return (1);
	tmp = (*head)->next;
	if (tmp)
		tmp->prev = NULL;
	free(*head);
	(*head) = tmp;
	return (1);
}
/**
 * delete_dnode_end - deletes the node at the end of a linked list
 * @head: pointer to head of linked list
 * Return: 1
*/
int delete_dnode_end(dlistint_t **head)
{
	dlistint_t *ptr = *head;

	if (!ptr)
		return (1);
	while (ptr->next)
		ptr = ptr->next;
	if (ptr->prev)
		ptr->prev->next = NULL;
	free(ptr);
	return (1);
}
/**
 * delete_dnodeint_at_index - deletes the node specified by index
 * from a linked list
 * @head: pointer to head of linked list
 * @index: index of node to be deleted
 * Return: 1 on Success -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t list_len = dlistint_length(*head), i = 0;
	dlistint_t *ptr = *head;

	if (index >= list_len)
		return (-1);
	if (index == 0)
		delete_dnode(head);
	else if (index == list_len - 1)
		delete_dnode_end(head);
	else
	{
		while (i != index)
		{
			ptr = ptr->next;
			i++;
		}
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(ptr);
	}
	return (1);
}
