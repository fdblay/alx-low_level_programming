#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @i: parameter
* Return: last digit
*/
int print_last_digit(int i)
{
	int n;

	if (i > 0)
		i = i;
	n = i % 10;
	_putchar(n + 48);
	return (n);
}
