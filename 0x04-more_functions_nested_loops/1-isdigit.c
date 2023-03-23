#include "main.h"
/**
*_isdigit - checks if a character is a digit
*@n: number
*Return: 1 if character is a digit 0 otherwise
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
