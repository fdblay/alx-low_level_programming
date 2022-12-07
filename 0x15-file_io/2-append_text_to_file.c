#include "main.h"

/**
 * _strlen - checks for the length of the string
 * @s: string to check
 *
 * Return: len of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i += 1;

	return (i);
}

/**
 * append_text_to_file - appends text at the end of a text file
 * @filename: pointer to name of file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, f_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	f_write = write(fd, text_content, _strlen(text_content));
	close(fd);

	if (f_write == -1)
		return (-1);

	return (1);
}
