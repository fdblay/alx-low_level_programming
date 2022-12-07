#include "main.h"

/**
 * main - copies the content of a file into another file
 * @argv: input argument
 * @argc: number of arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int fd, f_to, f_in, f_out;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]),
			exit(98);

	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]),
			exit(99);
	f_in = f_out = 1;
	while (f_in)
	{
		f_in = read(fd, buf, 1024);
		if (f_in == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
		if (f_in > 0)
		{
			f_out = write(f_to, buf, f_in);
			if (f_out == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
					exit(99);
		}
	}
	f_out = close(fd);
	if (f_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd),
			exit(100);
	f_out = close(f_to);
	if (f_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to),
			exit(100);
	return (0);
}
