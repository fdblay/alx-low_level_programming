#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase character
* @c: formal parameter passed
* Return:1 0r 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(49);

	}
	else
	{
		_putchar(48);

	}
	return (0);
}
