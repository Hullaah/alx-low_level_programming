/**
 * print_to_98 - prints from the given number to 98
 * @n: operand
 * Return: void (does not have a retuen value)
*/
#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
int i = 0;
if (n >= 98)
{
for (int i = n; i > 97; i--)
{

if (i != 98)
{
printf("%d, ", i);
}

}
}
if (n < 98)
{
for (int i = n; i < 98; i++)
{
printf("%d, ", i);
}
}

printf("%d", 98);

}
