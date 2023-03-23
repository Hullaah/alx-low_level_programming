#include "main.h"
/**
 * print_square - prints a square of size size
 * @size: number
 * Return: void (does not have a return value)
*/
void print_square(int size)
{
	int i, j = 0;

	if (size < 1)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
