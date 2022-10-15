#include <stdio.h>
/**
 * main - prints all single digits using the putchar function
 * Return: Always 0
 */

int main(void)
{
	int int_n;

	for (int_n = 48; int_n <= 57; int_n++)
	{
		putchar(int_n);
	}

	putchar(10);
	return (0);
}
