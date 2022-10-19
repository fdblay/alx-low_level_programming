#include "main.h"
/**
* print_sign - prints teh sign of a number
* @n: holds the value of the integer
* Return: 1 & print + or 0 & print 0 and -1 & print - based on the condition
*/
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 48)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 48)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
