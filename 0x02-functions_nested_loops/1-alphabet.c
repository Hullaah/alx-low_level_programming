#include "main.h"
/**
 * print_alphabet - prints all the alphabets of
 * the English language in lowercase.
 * Return: void (does not have a return value)
*/
void print_alphabet(void)
{
	int character = 97;

	while (character < 123)
	{
	_putchar(character);
	character++;
	}

	_putchar(10);
}
