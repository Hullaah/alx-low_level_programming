#include "main.h"
#include <stdio.h>
/**
*_isdigit - checkes if a character is a digit.
*@c: character
*Return: 0 if character is a digit otherwise 1
*/
int _isdigit(int c)
{
	if (c > 47 && c < 59)
		return (1);
	else
		return (0);
}
int main(void)
{
	printf("%d",_isdigit('1'));
	printf("%d",_isdigit('2'));
	printf("%d",_isdigit('3'));
	printf("%d",_isdigit('4'));
	printf("%d",_isdigit('5'));
	printf("%d",_isdigit('6'));
	printf("%d",_isdigit('7'));
	printf("%d",_isdigit('8'));
	printf("%d",_isdigit('9'));
	printf("%d",_isdigit('0'));
	printf("%d",_isdigit(47));
	printf("%d",_isdigit(58));
	printf("%d",_isdigit(59));
	return 0;
}
