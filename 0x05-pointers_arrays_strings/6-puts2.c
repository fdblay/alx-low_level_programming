#include "main.h"

/**
* puts2 - prints every character of a string from the first
* @str: parameter passed
* Return: nothing
*/
void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
		else
			continue;
	}
	_putchar(10);
}
