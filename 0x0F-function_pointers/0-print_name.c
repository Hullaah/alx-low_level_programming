#include "function_pointers.h"
/**
 * print_name - prints a name with the function pointer
 * @name: name
 * @f: function pointer
 * Return: void (does not have a return value)
*/

void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
