#include "main.h"

/**
 * _strcmp - compares to string to check if they are equal
 * @s1: first string
 * @s2: second string
 * Return: 0 if the strings are equal. Else the difference betwen the string if
 * they are not equal
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] - s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}


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
