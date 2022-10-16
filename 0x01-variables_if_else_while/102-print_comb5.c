#include <stdio.h>
/**
 * main - prints all possible combinations of two two digits numbers
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		putchar((char)n / 10 + '0');
		putchar((char)n % 10 + '0');
		putchar(' ');
		putchar((char)n / 10 + '0');
		putchar((char)n % 10 + '0');

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar (10);
	return (0);
}
