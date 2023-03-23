#include "main.h"
/**
 * more_numbers - prints all numbers from 0 to 14
 * Return: void (does not have a return value)
*/
void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if ((i / 10) != 0)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar(10);
		j++;
	}
}
