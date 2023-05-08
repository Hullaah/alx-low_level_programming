#include "main.h"
/**
 * read_textfile - reads amount specified by letters from filename to stdout
 * @filename: filename
 * @letters: amount of bytes to read up to
 * Return: amount of bytes written
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, red, written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	red = read(fd, buffer, letters);
	if (red == -1)
		return (0);
	written = write(STDIN_FILENO, buffer, red);
	if (written == -1)
		return (0);
	free(buffer);
	close(fd);
	if (red != written)
		return (0);
	return (written);

}
