#include "main.h"
/**
* print_sign - prints teh sign of a number
* @n: holds the integer value
* Return: 1 & print + or 0 & print 0 and -1 & print - based on the condition
*/
int print_sign(int n)
{
	return ((n > 0) || (n == 0) || (n < 0));
}
