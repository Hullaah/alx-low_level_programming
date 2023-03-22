#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 * Return: void (does not have a return value)
*/

void jack_bauer(void)
{
	int i, j = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + 48);
			}
			else
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}

			_putchar(':');

			if (j < 10)
			{
				_putchar('0');
				_putchar(j + 48);
				_putchar(10);
			}
			else
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
				_putchar(10);
			}

		}

	}

}
