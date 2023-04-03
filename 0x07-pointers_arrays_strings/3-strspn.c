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
 * _strspn - 
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int /*found,*/ length = 0;
	unsigned int word_length = string_length(accept);
	unsigned int found[word_length];

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				found[]
			}
		}
		length++;
		if (found == word_length)
			break;
		
	}
	return (length);
}