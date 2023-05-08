#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @c: string whose length is to be calculated
 * Return: string length
*/
int _strlen(char *c)
{
	if (c[0] != '\0')
		return (1 + _strlen(c + 1));
	else
		return (0);
}
/**
 * create_file - creates a file writing text_content to the file
 * @filename: filename ro be created or written to
 * @text_content: text to be written to file
 * Return: 1 without error -1 if there is error
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, written;
	int string_length;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	string_length = _strlen(text_content);
	written = write(fd, text_content, string_length);
	close(fd);
	if (written == -1)
		return (-1);
	return (1);
}
