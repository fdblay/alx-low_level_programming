#include <stdio.h>

/**
 * main - prints all base 16 numerals in lowercase
 * Return: Always 0
 */

int main(void)
{
	int int_n;
	char lc;

	for (int_n = 0; int_n < 10; int_n++)
	{
		putchar((int_n % 10) + '0');
	}

	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}

	putchar(10);
	return (0);
}
