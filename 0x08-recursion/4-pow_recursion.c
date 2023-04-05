 #include "main.h"
/**
 * _pow_recursion - calculates the power of a number
 * @x: base
 * @y: power
 * Return: x raise to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
