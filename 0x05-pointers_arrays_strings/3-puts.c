#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: string
 * Return: void (does not have a return value)
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
