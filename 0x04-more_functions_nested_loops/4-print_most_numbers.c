#include "main.h"
/**
*print_most_numbers - prints all numbers from 0 to 9 except 2 and 4
*Return: void (does not have a return value)
*/
void print_most_numbers(void)
{
	int i = 48;

	for (; i < 58; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
}
