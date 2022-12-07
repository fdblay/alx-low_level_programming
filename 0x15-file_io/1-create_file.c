#include "main.h"

/**
 * _strlen - checks for the lenght of a string
 * @s: string
 *
 * Return: len
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		i += i;
	}
	return (i);
}

/**
 * create_file - function creates file
 * @filename: pointer to text file name
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, f_write;

	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if(fd == -1)
		return (-1);


	if (text_content == NULL)
		return (1);

	f_write = write(fd, filename, _strlen(text_content));
	close(fd);

	if (f_write == -1)
		return (-1);


	return (1);
}
