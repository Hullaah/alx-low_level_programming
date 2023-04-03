#include "main.h"
/**
 * _strchr - checks the occurence of a character in a string
 * @s: string to be checked
 * @c: character to check
 * Return: pointer to the first occurrence of the character c in the string s
 * ,or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return 0;
}
