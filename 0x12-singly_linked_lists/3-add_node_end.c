#include "lists.h"
#include <string.h>

/**
 * _strlen - calculates the length of a string
 * @s: s
 * Return: the length of a string
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - adds a node to the end of a singly linked list
 * @head: pointer to node start
 * @str: node string
 * Return: pointer to new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *ptr = *head;
	char *string;
	int string_length;

	string_length = _strlen(str);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = string;
	node->len = string_length;
	node->next = NULL;

	while (ptr && ptr->next)
	{
		ptr = ptr->next;
	}
	if (!ptr)
	{
		*head = node;
		return (*head);
	}
	ptr->next = node;
	return (*head);
}
