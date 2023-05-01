#include "lists.h"
#include <stdio.h>

/**
 * print - prints  astring before the main function gets executed
 * Return: void (does not have a return value)
*/
void print(void)
{
	char *quote = "You're beat! and yet, you must allow,\n";

	printf("%sI bore my house upon my back!\n", quote);
}
