#include "main.h"
/**
 * print_binary - prints a number in binary using recursion
 * @n: number to be printed in binary format
 * Return: void (does not have a return value)
*/
void print_binary(unsigned long int n)
{
	if (n)
		print_binary(n >> 1);
	if (n)
	_putchar((n & 1) + '0');
}
