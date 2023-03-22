/**
 * print_last_digit - prints the last digit of a number
 * @a: operand
 * Return: last digit of a number.
*/
#include "main.h"
int print_last_digit(int a)
{
	if (a < 0)
	{
		_putchar((-1 * (a % 10)) + 48);
		return (-1 * (a % 10));
	}
	_putchar((a % 10) + 48);
	return (a % 10);
}
