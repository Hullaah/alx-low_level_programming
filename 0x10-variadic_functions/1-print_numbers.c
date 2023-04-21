#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints all the numbers given to a function
 * separting them with separator
 * @separator: separator to be inserted between printed numbers
 * @n: amount of numbers to be printed
 * Return: void (does not have a return value)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%d", separator, va_arg(args, int));
	}
	printf("\n");
}
