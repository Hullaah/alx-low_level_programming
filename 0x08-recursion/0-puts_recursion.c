#include "main.h"
/**
 * _puts_recursion - similar to the puts function but operates recursively
 * @s: string
 * Return: void does not have a return value
*/
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);
}
