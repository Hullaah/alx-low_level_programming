#include <stdio.h>

/**
 * main - prints the sum of all numbers that are multiples of 5 or 3
 * Return: Always (0)
*/
int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
