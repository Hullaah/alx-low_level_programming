#include <stdio.h>
/**
 * main - entry point
 * Return: 0 Success (Always)
*/
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int i;

	for (i = 0; ;)
	{
		if (num2 > 9)
		{
			num1++;
			num2 = num1 + 1;
		}
		if (num1 > 8)
			break;
		putchar(num1 + '0');
		putchar(num2 + '0');
		if (num1 < 8)
		{
			putchar(',');
			putchar(' ');
		}
		num2 = num2 + 1;
		i++;
	}
	putchar('\n');
	return (0);
}
