#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arglist;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			return;
		if (!separator)
			printf("%d", va_arg(arglist, unsigned int));
		else if (separator && i == 0)
			printf("%d", va_arg(arglist, unsigned int));
		else
			printf("%s%d", separator, va_arg(arglist, unsigned int));
	}

	va_end(arglist);

	printf("\n");
}
