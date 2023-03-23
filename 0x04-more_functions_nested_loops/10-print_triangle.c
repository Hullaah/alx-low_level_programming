#include "main.h"
/**
 * print_triangle - prints a triangle of size size
 * @size: number
 * Return: void (does not have a return value)
*/
void print_triangle(int size)
{
	int i, j = 0;
	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{

			for (j = 0; j < size + 1; j++)
			{
				if (size - j > i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
