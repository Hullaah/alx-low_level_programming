#include "main.h"
/**
 * string_toupper - converts all the characters of a string to uppercase
 * @string: string to be uppercased
 * Return: uppercased string
*/
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] > 96 && string[i] < 123)
		{
			string[i] = string[i] - 32;
		}
	}
	return (string);
}
