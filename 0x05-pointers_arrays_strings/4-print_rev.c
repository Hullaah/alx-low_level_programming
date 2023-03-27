#include "main.h"
/**
 * print_rev - prints a string by reversing it
 * @s: string
 * Return: void (does not have a return value)
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
