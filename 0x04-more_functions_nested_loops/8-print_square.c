#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square of size size
 * @size: number
 * Return: void (does not have a return value)
*/
void print_square(int size)
{
	int i = 0;

	if (size < 1)
	{
		putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (int i = 0; i < size; i++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
int main(void)
{
	print_square(7);
}
