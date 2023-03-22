#include <stdio.h>

/**
 * main - prints the sum of even numbers unt he fibonacci sequence
 * Return: Always (0)
*/
int main(void)
{
	int sum = 0;
	int i = 0;

	for (i = 0; i < 4000000; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
