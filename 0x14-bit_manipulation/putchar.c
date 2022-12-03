#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints characters to stdout
 * @c: char argument 
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
