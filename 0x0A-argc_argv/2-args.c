#include "main.h"
#include <stdio.h>
/**
 * main - prints all the command line arguments given to a program
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
