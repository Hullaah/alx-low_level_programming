#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0 to 9
 * Return: void (does not have a return value)
*/
#include <stdio.h>
void times_table(void)
{
int i, j = 0;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int ans = i * j;
if ((ans % 10) != ans)
{
putchar((ans / 10) + 48);
putchar((ans % 10) + 48);
}
else
{
putchar(ans + 48);
}
if (j == 9)
{
continue;
}
if (ans < 10)
{
putchar(',');
putchar(' ');
putchar(' ');
continue;
}

putchar(',');
putchar(' ');

}
putchar(10);
}

}
int main(void)
{
    times_table();
}