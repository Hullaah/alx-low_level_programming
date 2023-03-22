#include "main.h"
/**
 * print_alphabet_x10 - prints all the alphabets of
 * the english language in lowercase 10 times.
 * Return: void (does not have a return value)
*/
void print_alphabet_x10(void)
{
	int i, j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
