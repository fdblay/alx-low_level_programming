#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: parameter passed
* Return: -1 and 0
*/
int _sqrt_recursion(int n)
{
	int result;

	if (n == 0 && n == 1)
		return (-1);
	else
		return (result = n * _sqrt_recursion(n - 1));
}
