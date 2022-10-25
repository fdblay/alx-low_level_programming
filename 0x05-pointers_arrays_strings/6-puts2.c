#include "main.h"

/**
* puts2 - prints every character of a string from the first
* @str: parameter passed
* Return: nothing
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
		_putchar(10);
	}
}
