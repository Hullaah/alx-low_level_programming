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
	while (format[j] != '\0')
	{
		switch (format[j])
		{
		case 'c':
			c = (char) va_arg(args, int);
			printf("%c", c);
			if (format[j + 1] != '\0')
				printf(", ");
			break;
		case 'f':
			f = (float) va_arg(args, double);
			printf("%f", f);
			if (format[j + 1] != '\0')
				printf(", ");
			break;
		case 's':
			s = va_arg(args, char *);
			printf("%s", s);
			if (format[j + 1] != '\0')
				printf(", ");
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			if (format[j + 1] != '\0')
				printf(", ");
			break;
		default:
			break;
		}
		j++;
	}
}
