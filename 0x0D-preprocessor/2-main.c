#include <stdlib.h>
#include <stdio.h>
#include "OBJECT_LIKE_MACRO.H"

/**
 * _putchar - prints char to stdout
 * @c: parameter passed
 * Return: 1 or 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - prints out __FILE__
 * Return: 0
 */
int main(void)
{
	char *ptr = __FILE__;
	int len;

	ptr = (char *) malloc(SIZE);
	if (ptr == NULL)
		return (NULL);
	for (len = 0; len < ptr; len++)
	{
		if (*ptr[len] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(*ptr[len]);
	}
	return (0);
}
