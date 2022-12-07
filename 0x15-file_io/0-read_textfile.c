#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: pointer to the text file
 * @letters: number of characters to read and print
 *
 * Return: actual number of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, f_write, f_read;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) *letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	f_read = read(fd, buf, letters);
	if (f_read == -1)
	{
		return (0);
	}

	f_write = write(STDOUT_FILENO, buf, f_read);
	if (f_write == -1)
	{
		free(buf);
		return (0);
	}

	if (f_read != f_write)
		return (0);
	free(buf);
	close(fd);

	return (f_write);
}
