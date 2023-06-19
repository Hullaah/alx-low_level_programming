#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to check from
 * @needle: string to be checked
 * Return:  a pointer to the beginning of the located substring, or NULL if
 * the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (_strcmp(haystack + i, needle) == 0)
		{
			return (haystack + i);
		}
	}
	return (0);
}
