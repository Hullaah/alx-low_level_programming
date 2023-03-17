#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int character = 97;
int number = 48;

while (number < 58)
{
putchar(number);
number++;
}

while (character < 103)
{
putchar(character);
character++;
}

putchar(10);
    
return (0);
}