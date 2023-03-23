#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * print_number - prints numbers using the _putchar function
 * @n: number
 * Return: void (no return value)
*/
void print_number(int n)
{
	int num_length, i = 0;
	num_length = (int) (log10(n) + 1);
	for (i = num_length - 1; i > -1; i--)
	{
		putchar(((int)(n / pow(10,i)) % 10) + 48);
	}
	
}
int main(void)
{
	print_number(10839);
	return 0;
}
