#include "main.h"
/**
 * leet - encodes a string
 * @string: string to be encoded
 * Return: returns the encooded string
*/
char *leet(char *string)
{
	int i, j;
	char s[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char val[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (string[i] == s[j])
			{
				string[i] = val[j];
			}
		}
	}
	return (string);
}
