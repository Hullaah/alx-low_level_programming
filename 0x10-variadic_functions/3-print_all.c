#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	char c;
	char *s;
	int i, j = 0;
	float f;
	/*int status = 0;*/
	va_list args;

	va_start(args, format);
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
		j++;
	}
}
