#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints strings separating them with separator
 * @separator: separator
 * @n: number of strings to be printed
 * Return: void (does not have a return value)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	if (n == 0)
		return;
	va_start(args, n);
	s = va_arg(args, char *);
	if (!s)
	{
		printf("(nil)\n");
		return;
	}
	else
		printf("%s", s);
	for (i = 1; i < n; i++)
	{
		s = va_arg(args, char *);
		if (!s)
		{
			printf("(nil)\n");
			return;
		}
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(args);
}
