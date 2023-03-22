#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0 to 9
 * Return: void (does not have a return value)
*/
void times_table(void)
{
	int i, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{

			int ans = i * j;

			if (j != 0)
				_putchar(',');
			if (ans < 10 && j != 0)
			{
				_putchar(' ');
			}
			if (j != 0)
				_putchar(' ');

			if ((ans % 10) != ans)
			{
				_putchar((ans / 10) + 48);
				_putchar((ans % 10) + 48);
			}
			else
			{
				_putchar(ans + 48);
			}

		}
		_putchar(10);
	}

}
