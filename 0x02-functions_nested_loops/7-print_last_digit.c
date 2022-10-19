#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @i: parameter
* Return: last digit
*/
int print_last_digit(int i)
{
	if (i > 0 || i < 0)
	{
		i = +-i;
	}
	return (i % 10);
}
