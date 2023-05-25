#include "main.h"

/**
 * print_times_table - prints the time table from 0 to the argument given
 * @n: number to stop at
 * Return: void (does not have a return value)
*/
void print_times_table(int n)
{
	int i, j = 0;

	for (i = 0; i < (n + 1); i++)
	{
		if (n > 15 || n < 0)
		{
			break;
		}
		for (j = 0; j < (n + 1); j++)
		{

			int ans = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (ans < 10 && j != 0)
				_putchar(' ');
			if (j != 0)
				_putchar(' ');
			if ((ans / 10) != 0)
			{
				if ((ans / 100) != 0)
				{
					_putchar((ans / 100) + 48);
					_putchar(((ans / 10) % 10) + 48);
					_putchar((ans % 10) + 48);
				}
				else
				{
					_putchar((ans / 10) + 48);
					_putchar((ans % 10) + 48);
				}
			}
			else
			{
				_putchar(ans + 48);
			}
		}
		_putchar(10);
	}
}
