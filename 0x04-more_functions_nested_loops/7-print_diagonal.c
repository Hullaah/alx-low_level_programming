#include "main.h"
/**
 * print_diagonal - prints a diagonal line of length n
 * @n: number
 * Return: void (does not have a return value)
*/
void print_diagonal(int n)
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
			_putchar(35);
		}
	}
	_putchar(10);
}
