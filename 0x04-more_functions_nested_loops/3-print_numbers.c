#include "main.h"
/**
*print_numbers - print all numbers from 0 to 9
*Return: void (does not have a return value)
*/
void print_numbers(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
