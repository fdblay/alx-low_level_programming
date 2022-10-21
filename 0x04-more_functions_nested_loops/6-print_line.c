#include "main.h"

/**
* print_line - draws a straight line
* @n: number of times to print _
*/

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar(95);
		}
	}
	else
	{
		_putchar(10);
	}
}
