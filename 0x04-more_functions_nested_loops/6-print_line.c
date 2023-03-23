#include "main.h"
/**
 * print_line - prints a line of length n
 * @n: number
 * Return:  void (does not have a return value)
*/

void print_line(int n)
{
	int i = 0;

	if (n < 1)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
