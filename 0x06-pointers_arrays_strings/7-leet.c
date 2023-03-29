#include "main.h"
/**
 * leet - encodes a string
 * @string: string to be encoded
 * Return: returns the encooded string
*/
char *leet(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		switch (string[i])
		{
		case 'a':
		case 'A':
			string[i] = '4';
			break;
		case 'e':
		case 'E':
			string[i]  = '3';
			break;
		case 'o':
		case 'O':
			string[i] = '0';
			break;
		case 't':
		case 'T':
			string[i] = '7';
			break;
		case 'l':
		case 'L':
			string[i] = '1';
		default:
			break;
		}
	}
	return (string);
}
