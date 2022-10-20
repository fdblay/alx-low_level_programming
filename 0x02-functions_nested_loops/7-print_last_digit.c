#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @i: parameter
* Return: last digit
*/
int print_last_digit(int i)
{
	int ld;
	int pwr = 1;

	while (ld > 0)
		pwr *= 10;
		ld--;
	_putchar((i % pwr) + '0');
	return (0);
}
