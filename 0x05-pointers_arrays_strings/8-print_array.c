#include "main.h"
#include <stdio.h>
/**
 * print_array - prints all the elements of an array up to the given argument
 * @a: array
 * @n: amount of elements to be printed
 *
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(",");
			printf(" ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
