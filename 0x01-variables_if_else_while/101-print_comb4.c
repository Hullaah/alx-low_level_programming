#include <stdio.h>
/**
 * main - entry point
 * Return: 0 Success (Always)
*/
int main(void)
{
	int num1 = 0;
	int num2 = 1;
        int num3 = 2;
	int i;

	for (i = 0; ;)
	{
		if (num3 > 9)
		{
			num2++;
			num3 = num3 + 1;
		}
		if (num2 > 8)
		{
                        
                }
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
