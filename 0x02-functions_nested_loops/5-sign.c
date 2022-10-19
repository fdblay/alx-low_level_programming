#include "main.h"
/**
* print_sign - prints teh sign of a number
* @n: holds the integer value
* Return: 1 & print + or 0 & print 0 and -1 & print - based on the condition
*/
int print_sign(int n)
{
	int n;

	n = 1;

	if (n > 48)
	{
		_putchar(43);
	}
	else if (n == 48)
	{
		_putchar(48);
	}
	else if (n < 48)
	{
		_putchar(45);
	}
	return (1, 0, -1);
}
