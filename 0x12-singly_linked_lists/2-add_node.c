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
 * add_node - adds a node to a singly linked list
 * @head: pointer to node start
 * @str: node string
 * Return: pointer to new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *string;
	int string_length;

	string_length = _strlen(str);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
		return (NULL);
	node->str = string;
	node->len = string_length;
	node->next = *head;

	*head = node;
	return (*head);
}
