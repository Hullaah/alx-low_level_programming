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
	int sum = 0;
	int arg;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		arg = atoi(argv[i]);
		sum += arg;
	}
	printf("%d\n", sum);
	return (0);
}
