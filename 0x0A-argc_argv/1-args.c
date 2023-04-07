#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of command line arguments given to a program
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
