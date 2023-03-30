#include "main.h"
/**
 * rot13 - encrypts a string by rotating the characters in the string 13 places
 * @string: string to be encrypted
 * Return: the encrypted string
*/
char *rot13(char *string)
{
	int i, j;
	char alphabet[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char cipher[] =   "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (string[i] == alphabet[j])
			{
				string[i] = cipher[j];
			}
		}
	}
	return (string);
}
