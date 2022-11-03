#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: parameter passed
* Return: factorial if true and -1 to indicate an error
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
