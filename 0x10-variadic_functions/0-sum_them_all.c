#include "variadic_functions.h"
/**
 * sum_them_all - sums all the numbers given to a given function
 * @n: number of arguments to add
 * Return: sum of numbers
*/
int sum_them_all(unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list var_args;

	if (n == 0)
		return (0);
	va_start(var_args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(var_args, int);
	}
	va_end(var_args);
	return (sum);
}
