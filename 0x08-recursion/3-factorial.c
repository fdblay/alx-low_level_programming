#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: parameter passed
* Return: factorial if true, 1 when factorial is  0 and -1 to indicate an error
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
