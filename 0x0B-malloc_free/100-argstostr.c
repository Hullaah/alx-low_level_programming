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


char *argstostr(int ac, char **av)
{
	int i, j, k, total_length = 0;
	char *string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		total_length += _strlen(av[i]);
		i++;
	}
	string = malloc(total_length + ac + 1);
	for (; j < total_length + ac; j++)
	{
		if (av[k][j] != '\0')
			string[j] = av[k][j];
		else
		{
			k++;
			string[j] = '\n';
		}
		
	}
	string[j] = '\0';
	return (string);
}


