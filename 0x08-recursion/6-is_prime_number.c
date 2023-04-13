#include "main.h"
/**
 * _is_base_prime - base for the function is_prime_number
 * @n: number
 * @i: base number
 * Return: 1 if number is a prime number 0 otherwise
*/
int _is_base_prime(int n, int i)
{
	if (n / i == 1)
	{
		return (1);
	}
	if (n % i || (n / i) == n)
	{
		i++;
		return (_is_base_prime(n, i));
	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - determines if a number is a prime number
 * @n: number
 * Return: 1 if number is a prime number 0 otherwise
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (_is_base_prime(n, 1));
}

