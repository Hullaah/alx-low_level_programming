#include "main.h"
/**
 * main - prints the string '_putchar'
 * Return: 0 (Always)
*/
int main(void)
{
char put[] = "_putchar";
int i = 0;
for (i = 0; put[i] != '\0'; i++)
{
_putchar(put[i]);
}
_putchar(10);
return (0);
}
