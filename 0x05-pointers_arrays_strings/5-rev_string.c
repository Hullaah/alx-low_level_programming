#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void (does not have a return value)
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *temp = "";
	while (s[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		*(temp + j) = *(s + i);
		j++;
	}
	s = temp;
	
}
