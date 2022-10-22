#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @n: number of times to print \
*/
void print_diagonal(int n)
{
	int d, u;

	if (n <= 0)
		_putchar(10);

	for (d = 0; d < n; d++)
	{
		for (u = 0; u < d; u++)
			_putchar(' ');

		_putchar(47);
		_putchar(10);
	}
}
