#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints a diagonal line of length n
 * @n: number
 * Return: void (does not have a return value)
*/
void print_diagonal(int n)
{
	int i = 0;

	if (n < 1)
	{
		putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar(' ')
			putchar('\\');
			putchar(10);
		}
	}
	
}
int main(void)
{
	print_diagonal(10);
	return 0;
}