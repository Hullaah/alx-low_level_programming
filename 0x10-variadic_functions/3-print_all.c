#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	char type;
	void (*f)(void *type);
} print;

void print_all(const char * const format, ...)
{
	char *traverse = format;
	char c;
	char *s;
	int i;
	float f;
	int status;
	print elements[] = {
			{ 'c', print_char },
			{ 's', print_string },
			{ 'f', print_float },
			{ 'i', print_int}
		}
	va_list args;

	va_start(args, format);
	while (*traverse != '\0')
	{
		
	}
}
void print_char(void *c)
{
	char d = *(char *) c;
	printf("%c", d);
}

void print_string(void *s)
{
	char *t = (char *) s;
	printf("%s", t);
}
void print_float(void *f)
{
	float g = *(float *) f;
	printf("%f", g);
}
void print_int(void *i)
{
	int f = *(int *) i;
	printf("%d", f);
}
