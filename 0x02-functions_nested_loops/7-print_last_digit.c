#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @i: parameter
* Return: last digit
*/
int print_last_digit(int i)
{
	int n = i % 10;

	if (n < 0)
		n *= -1;

	_putchar(n + 48);

	return (0);
}
