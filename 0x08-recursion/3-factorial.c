#include "main.h"
/**
 * factorial - calcuates the factorial of a given number
 * @n: number whose factorial is to be calculated
 * Return: factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
