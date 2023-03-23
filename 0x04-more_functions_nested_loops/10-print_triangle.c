#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle of size size
 * @size: number
 * Return: void (does not have a return value)
*/
void print_triangle(int size)
{
	int i, j = 0;
	if (size < 1)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{

			for (j = 0; j < size + 1; j++)
			{
				if (size - j > i)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}
	}
}
int main()
{
	print_triangle(1);
}