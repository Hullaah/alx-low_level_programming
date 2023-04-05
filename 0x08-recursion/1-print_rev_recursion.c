#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a string using recursion
 * @s: string to be reversed
 * Return: void (does not have a return value)
*/
void _print_rev_recursion(char *s)
{
	int i = 0;
	char letter = s[i];

	if (s[0] == '\0')
	{
		return;
	}
	i++;
	if (s[i] == '\0')
	{
		_putchar(s[i - 1]);
		return;
	}
	_print_rev_recursion(s + i);
	_putchar(letter);
}
