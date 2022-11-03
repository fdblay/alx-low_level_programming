#include "main.h"

int _sqrt(int, int);
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: parameter passed
* Return: Square root of number
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - recursive square root
* @n: number
* @i: iterator
* Return: -1 or 0
*/
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
