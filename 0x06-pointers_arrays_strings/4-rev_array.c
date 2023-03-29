#include "main.h"

void reverse_array(int *a, int n)
{
	int i,j,tmp;

	for (i = 0, j = n - 1; i < n / 2; i++,j--)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
	}
	
}