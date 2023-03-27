#include "main.h"
/**
 * puts_half - prints the second half of a string
 * Return: void (does not have a return value)
 * @str: string
*/
void puts_half(char *str)
{
	int i = 0;
	int count;
	int n;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	if (count % 2 == 1)
		n = (count - 1) / 2;
	else
		n = count / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');

}
