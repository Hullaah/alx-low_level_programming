#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: void (does not have a return value)
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
