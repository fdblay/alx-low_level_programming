#include "main.h"

/**
* _puts - prints a string to stdout
* @s: parameter passed
* Return: void
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar(10);
}
