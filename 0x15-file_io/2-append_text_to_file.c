#include "main.h"
/**
 * _strlen - length of string
 * @c string
 * Return: string length
*/
int _strlen(char *c)
{
	return((c[0] != '\0') ? _strlen(c + 1) : 0);
}
