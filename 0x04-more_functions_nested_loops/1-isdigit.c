#include "main.h"
/**
*_isdigit - checkes if a character is a digit.
*@c: character
*Return: 0 if character is a digit otherwise 1
*/
int _isdigit(int c)
{
	if (c > 47 && c < 59)
		return (0);
	else
		return (1);
}
