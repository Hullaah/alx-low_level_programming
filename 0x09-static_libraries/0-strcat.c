#include "main.h"
/**
 * string_length - helper function to calculate length of strings
 * @string: string whose length is to be calculated
 * Return: length of caculated string
*/

int string_length(char *string)
{
	int i;

	for (i = 0; string[i] != '\0';)
	{
		i++;
	}
	return (i);
}

/**
 * _strcat - concatenates two strings together
 * @dest: string to be added to
 * @src: string concatenated to dest
 * Return: concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_length = string_length(dest);
	int src_length = string_length(src);

	for (i = dest_length; i < dest_length + src_length; i++)
	{
		dest[i] = src[i - dest_length];
		if (src[i - dest_length - 1] == '\0')
		{
			dest[i + 1] = '\0';
		}
	}
	return (dest);
}

