#include "main.h"
/**
 * _islower - checks if a character is a lowercase alphabet.
 * @c: character to be checked
 * Return: 1 (if character is lowercase) otherwise 0.
*/
int _islower(int c)
{
for (int i = 97; i < 123; i++)
{

if (i == c)
{
return (1);
}

}

return (0);
}
