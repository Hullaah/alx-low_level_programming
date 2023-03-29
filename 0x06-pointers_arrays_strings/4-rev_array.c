#include "main.h"
/**
 * reverse_array - reverses an array of size n
 * @a: pointer to array to be reversed
 * @n: number of elements in array
 * Return: void (does not have a return value)
*/
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
	}

}
