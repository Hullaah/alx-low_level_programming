#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @s: s
 * Return: the length of a string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - creates a copy of a string in the heap
 * @str: string to be duplicated
 * Return: pointer to char in the heap
*/
char *_strdup(char *str)
{
	char *string;
	int i;
	int str_length;

	if (str == NULL)
		return (NULL);
	str_length = _strlen(str);
	string = malloc(str_length + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < str_length; i++)
		string[i] = str[i];
	string[i] = '\0';
	return (string);
}
