#include "main.h"

void print_binary(unsigned long int n)
{
	if(n)
		print_binary(n >> 1);
	if (n)
	_putchar((n & 1) + '0');
}
