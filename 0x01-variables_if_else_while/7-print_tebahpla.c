#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int character = 122;

while (character > 96)
{
putchar(character);
character--;
}

putchar(10);
    
return (0);
}
