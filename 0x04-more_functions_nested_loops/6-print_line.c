#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a line of length n
 * @n: number
 * Return:  void (does not have a return value)
*/

void print_line(int n)
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
			putchar(95);
		}
	}
	putchar(10);
}
int main(void)
{
	print_line(10);
	return 0;
}
