#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = 0;

	if (c > a && c > b)
		largest = c;
	else if (b > a && b > c)
		largest = b;
	else if (a > b && a > c)
		largest = a;
	else if (a > b && c == a)
		largest = a;
	else if (a > c && b == a)
		largest = a;
	else if (b > a && c == b)
		largest = b;
	else if (b > c && a == b)
		largest = b;
	else if (c > b && a == c)
		largest = c;
	else if (c > a && b == c)
		largest = c;
	else if (a == b && b == c)
		largest = a;
	return (largest);
}
