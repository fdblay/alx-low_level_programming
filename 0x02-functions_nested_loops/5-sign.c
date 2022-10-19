#include "main.h"
/**
* print_sign - prints teh sign of a number
* @n: holds the value of the integer
* Return: 1 & print + or 0 & print 0 and -1 & print - based on the condition
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
