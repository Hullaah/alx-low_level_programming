#include "main.h"
/**
 * print_number - prints numbers using the _putchar function
 * @n: number
 * Return: void (no return value)
*/
void print_number(int n)
{
	int ncopy, count, power, i = 0;

	ncopy = n;
	count = 0;
	power = 1;
	if (n < 0)
		_putchar('-');
	while (ncopy)
	{
		ncopy /= 10;
		count++;
	}
	for (i = count - 1; i > 0; i--)
	{
		power *= 10;
	}
	while (power)
	{
		if (n > 0)
			_putchar(((n / power) % 10) + 48);
		else
			_putchar((((n / power) % 10) * -1) + 48);
		power /= 10;
	}
}
