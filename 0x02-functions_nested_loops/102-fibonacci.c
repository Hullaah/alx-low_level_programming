#include <stdio.h>
/**
 * main - prints the fibonacci numbers from 1 to 50
 * Return: Always (0)
*/
int main(void)
{
	printf("%d, ", 1);
	printf("%d, ", 2);
	unsigned long n = 0;

	for (int i = 0; i < 48; i++)
	{
		unsigned long num_b4_n, num_2stps_b4_n;

		if (i == 0)
		{
			num_b4_n = 2;
			num_2stps_b4_n = 1;
		}
		else
		{
			num_2stps_b4_n = n - num_2stps_b4_n;
			num_b4_n = n;
		}
		n = num_2stps_b4_n + num_b4_n;
		if (i == 47)
		{
			printf("%ld", n);
		}
		else
		{
			printf("%ld, ", n);
		}
	}
	printf("\n");
	return (0);
}
