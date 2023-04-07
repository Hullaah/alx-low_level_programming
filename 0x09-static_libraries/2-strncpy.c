#include "main.h"
/**
 * _strncpy - copy up to n bytes of strings from src to dest
 * @dest: pointer to copy src to
 * @src: string to be copied
 * @n: number of bytes to copy up to
 * Return: copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
