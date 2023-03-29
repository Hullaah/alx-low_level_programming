#include "main.h"

int string_length(char *string);

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

int string_length(char *string)
{
	int i;

	for (i = 0; string[i] != '\0';)
	{
		i++;
	}
	return (i);
}
