#include "main.h"
/**
 * _strlen - length of string
 * @c: string
 * Return: string length
*/
int _strlen(char *c)
{
	return ((c[0] != '\0') ? (1 + _strlen(c + 1)) : 0);
}
/**
 * append_text_to_file - appends  text to file
 * @filename: file name
 * @text_content: text to be appended to file
 * Return: 1 if succeeful, -1 if failed
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, written;
	int string_length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!text_content && fd != -1)
	{
		close(fd);
		return (1);
	}
	if (!text_content && fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content && fd == -1)
	{
		close(fd);
		return (-1);
	}
	written = write(fd, text_content, string_length);
	if (written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
