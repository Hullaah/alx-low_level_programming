#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int character = 97;

while (character < 123)
{
putchar(character);
character++;
}

putchar(10);

return (0);
}
