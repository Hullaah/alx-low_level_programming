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
 * _strncat - concatenats two strings together up to n bytes
 * @dest: string to be added to
 * @src: string concatenated to dest
 * @n: number of bytes to concatenate up to
 * Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = string_length(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + dest_length] = src[i];
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

