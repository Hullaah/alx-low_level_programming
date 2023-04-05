#include "main.h"
/**
 * _strlen_recursion - calculates the length of a string
 * @s: string
 * Return: string length
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	return (i + _strlen_recursion(s + i));
}
