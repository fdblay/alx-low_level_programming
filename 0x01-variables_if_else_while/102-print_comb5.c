#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers between 00 and 99
 * Return: Always 0
 */
int main(void)
{
	int f, r, e, d, n, m;

	f = r = e = d = 48;
	for (d = 48; d < 58; d++)
	{
	}
	for (e = 48; e < 58; e++)
	{
	}
	for (r = 48; r < 58; r++)
	{
	}
	for (f = 48; f < 58; f++)
	{
		n = (d + 10) + e;
		m = (r + 10) + f;
	}
	if (n < m)
	{
		putchar(d);
		putchar(e);
		putchar(' ');
		putchar(r);
		putchar(f);
		if (d == 57 && e == 56 && r == 57 && f == 57)
		{
		return;
		}
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}
