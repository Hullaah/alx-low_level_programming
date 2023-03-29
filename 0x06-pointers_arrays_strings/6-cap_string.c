#include "main.h"
/**
 * cap_string - check the code
 * @string: string to be capitalised
 * Return: capitalised string
*/
char *cap_string(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		switch (string[i])
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\t':
		case '\n':
			if (string[i + 1] > 96 && string[i + 1] < 123)
			{
				string[i + 1] -= 32;
				break;
			}
		default:
			break;
		}
	}
	return (string);
}
