#include "3-calc.h"
#include <stdio.h>
/**
 * main - calculates the operation on a given number
 * supplied via the command-line
 * @argc: command-line argument count
 * @argv: array of command-line argument
 * Return: check the code
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != NULL && argv[2][0] != '+' && argv[2][0] != '-' &&
	argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
	(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ans = get_op_func(argv[2])(num1, num2);
	printf("%d\n", ans);
	return (0);
}
