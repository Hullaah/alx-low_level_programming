#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int character = 97;
int upper = 65;

while (character < 123)
{
putchar(character);
character++;
}
while (upper < 91)
{
putchar(upper);
upper++;
}

putchar(10);
    
return (0);
}