#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - prints all the arguments given to it separating them with comma
 * @format: format that specifies how to print the string
 * Return: void (does not have arteturn value)
*/
void print_all(const char * const format, ...)
{
	char c;
	char *s;
	int i, j = 0;
	float f;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		s = "";
	while (format[j] != '\0')
	{
		switch (format[j])
		{
		case 'c':
			c = (char) va_arg(args, int);
			printf("%c", c);
			break;
		case 'f':
			f = (float) va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(args, char *);
			printf("%s", s);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
		default:
			break;
		}
		if (format[j + 1] != '\0' && (format[j] == 'c' || format[j] ==
		's' || format[j] == 'f' || format[j] == 'i'))
			printf(", ");
		j++;
	}
	printf("\n");
}
