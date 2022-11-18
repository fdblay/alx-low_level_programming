#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first argument passed
 *
 * Return: 0 or NULL if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (NULL);

	va_start(arglist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arglist, unsigned int);
	va_end(arglist);
	_putchar(sum + '\n');

	return (0);
}
