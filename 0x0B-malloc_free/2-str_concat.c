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
 * str_concat - concatenates two string together
 * @s1: first string
 * @s2: second string
 * Return: new pointer to concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int i, total_length, s1_length;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_length = _strlen(s1);
	total_length = s1_length + _strlen(s2);
	string = malloc(total_length + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < total_length; i++)
	{
		if (i > s1_length - 1)
			string[i] = s2[i - s1_length];
		else
			string[i] = s1[i];
	}
	string[i] = '\0';
	return (string);
}
