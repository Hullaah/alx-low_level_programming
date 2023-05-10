#include "main.h"
#include <stdio.h>
#define BUFFER 1024
/**
 *main - copies content of file to another file
 *@argc: agr count
 *@argv: arg vector
 *Return: depends
*/
int main(int argc, char *argv[])
{
	char *buf;
	ssize_t fd1, fd2, red, written;
	int clos;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buf = malloc(BUFFER);
	if (!buf)
	{
		clos = close(fd1);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		clos = close(fd1);
		free(buf);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((red = read(fd1, buf, BUFFER)))
	{
		if (red == -1)
		{
			clos = close(fd1);
			free(buf);
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		written = write(fd2, buf, BUFFER);
		if (written == -1)
		{
			free(buf);
			clos = close(fd1);
			clos = close(fd2);
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	}
	free(buf);
	clos = close(fd1);
	if (clos == -1)
	{
		clos = close(fd2);
		if (clos == -1)
		{
			dprintf(2, "Error: Can't close fd %ld", fd2);
			exit(100);
		}
		dprintf(2, "Error: Can't close fd %ld", fd1);
		exit(100);
	}
	clos = close(fd2);
	if (clos == -1)
	{
		dprintf(2, "Error: Can't close fd %ld", fd2);
		exit(100);
	}
	return (0);
}
