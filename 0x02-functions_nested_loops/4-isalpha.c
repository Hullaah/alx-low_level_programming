#include "main.h"
/**
 * _isalpha - checks whether a character is an alphabet
 * of the English language.
 * @c: character to be checked
 * Return: 1 (if character is an English alphabet) otherwise 0.
*/

int _isalpha(int c)
{

if ((c > 64 && c < 91) || (c > 96 && c < 124))
{
return (1);
}
else
{
return (0);
}

}
