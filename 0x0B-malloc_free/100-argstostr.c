#include "main.h"
#include <stdio.h>
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
 * calculate_total_length - calculates the sum of sll the string
 * length in an arry.
 * @av: array of strings
 * @ac: amount of elements in array
 * Return: sum of string length
*/
int calculate_total_length(int ac, char **av)
{
	int i = 0;
	int total_length = 0;

	while (i < ac)
	{
		total_length += _strlen(av[i]);
		i++;
	}
	return (total_length);
}


/**
 * argstostr - concatenates an array of strings together
 * @ac: amount of elements in the array
 * @av: array of strings
 * Return: concatenated string
*/
char *argstostr(int ac, char **av)
{
	int j = 0;
	int k = 0;
	int status = 0;
	char *string;
	int total_length = calculate_total_length(ac, av);

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	string = malloc(total_length + ac + 1);
	if (string == NULL)
		return (NULL);
	for (; j < total_length + ac; j++)
	{
		if (k > 0)
		{
			if (av[k][j - status] == '\0')
			{
				string[j] = '\n';
				k++;
				status += _strlen(av[k - 1]) + 1;
				continue;
			}
			string[j] = av[k][j - status];
		}
		else if (k == 0)
		{
			if (av[k][j] == '\0')
			{
				string[j] = '\n';
				k++;
				status += _strlen(av[k - 1]) + 1;
				continue;
			}
			string[j] = av[k][j];
		}
	}
	string[j] = '\0';
	return (string);
}
