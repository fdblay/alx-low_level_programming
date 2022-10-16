#include <stdio.h>
/**
 * main - prints numbers between 00 and 99
 * Return: Always 0
 */
int main(void)
{
	int f, r, e, d, n, m;

	f = r = e = d = 48;
	while (d < 58)
	{
		e = 48;
	while (e < 58)
	{
		r = 48;
	while (r < 58)
	{
		f = 48;
	while (f < 58)
	{
		n = (d + 10) + e;
		m = (r + 10) + f;
	if (n < m)
	{
		putchar(d);
		putchar(e);
		putchar(' ');
		putchar(r);
		putchar(f);
	if (d == 57 && e == 56 && r == 57 && f == 57)
		break;
		putchar(',');
		putchar(' ');
	}
	f++;
	}
	r++;
	}
	e++;
	}
	d++;
	}
	putchar(10);
	return (0);
}
