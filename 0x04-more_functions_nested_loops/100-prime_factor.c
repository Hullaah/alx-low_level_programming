#include <stdio.h>
/**
 * main - prints the highest prime factor of 612852475143
 * Return: Always (0)
*/
int main(void)
{
	long num = 612852475143;
	int  i = 0;

	for (i = 2; num != 1;)
	{
		if (num % i == 0)
		{
			num /= i;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", i);
	return (0);
}
