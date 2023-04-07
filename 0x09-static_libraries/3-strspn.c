#include "main.h"

/**
 * string_length - helper function to calculate length of strings
 * @string: string whose length is to be calculated
 * Return: length of caculated string
*/
unsigned int string_length(char *string)
{
	unsigned int i;

	for (i = 0; string[i] != '\0';)
	{
		i++;
	}
	return (i);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s:string
 * @accept: string
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;
	unsigned int found, length = 0;
	unsigned int word_length = string_length(accept);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				found++;
			}
		}
		length++;
		if (found == word_length)
			break;
	}
	return (length + 1);
}
