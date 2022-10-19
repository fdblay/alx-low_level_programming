#include "main.h"
/**
*print_times_table - print the n times table
* @n: parameter passed
*/
void print_times_table(int n)
{
	int num, prod;

	for (num = 0; num <= 15; num++)
	{
		_putchar(48);

		for (n = 1; n <= 15; n++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * n;

			if (prod <= 15)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');

		}
		_putchar(10);
	}
}
