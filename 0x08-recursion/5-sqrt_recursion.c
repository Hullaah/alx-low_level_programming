#include "main.h"
/**
 * _sqrt_recursion_base - base for square root recursion
 * @n: number
 * @i: half of n
 * Return: square root of n
*/
int _sqrt_recursion_base(int n, int i)
{
	float ans = (float) n / i;

	if (ans == i)
	{
		return (i);
	}
	if (ans > i)
	{
		return (-1);
	}
	else
	{
		i--;
		return (_sqrt_recursion_base(n, i));
	}
}
/**
 * _sqrt_recursion - determines the square root of a number
 * @n: number
 * Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion_base(n, n / 2));
}
