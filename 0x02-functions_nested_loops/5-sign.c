#include "main.h"
/**
 * print_sign - prints + if a number is greater than zero
 * prints 0 if a number is equal to zero otherwise prints
 * -1.
 * @n : character to be checked
 * Return - 1 (if a number is greater than zero).
 *          0 (if a number is equal to zero) Otherwise -1.
*/

int print_sign(int n)
{

if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
_putchar('1');
return (-1);
}

}
