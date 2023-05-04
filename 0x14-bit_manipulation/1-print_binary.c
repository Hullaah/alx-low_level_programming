#include "main.h"
/**
 * print_binary - prints a number in binary using recursion
 * @n: number to be printed in binary format
 * Return: void (does not have a return value)
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
