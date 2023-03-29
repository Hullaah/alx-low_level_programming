#include "main.h"

int string_length(char *string);

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

int string_length(char *string)
{
	int i;

	for (i = 0; string[i] != '\0';)
	{
		i++;
	}
	return i;
}
