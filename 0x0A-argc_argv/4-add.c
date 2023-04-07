#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies 2 numbers together
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		arg = atoi(argv[i]);
		sum += arg;
	}
	printf("%d\n", sum);
	return (0);
}
