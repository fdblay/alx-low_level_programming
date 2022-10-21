#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for a digit between 0 to 9
* @c: parameter passed
* Return: 0
*/

int _isdigit(int c)
{
	c = 5;

	if (c >= 0 && c <= 9)
	{
		_putchar(49);
	}

	else
	{
		_putchar(48);
	}
	return (0);
}
