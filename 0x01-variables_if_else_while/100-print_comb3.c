#include <stdio.h>
/**
 * main - print numbers between 00 and 89
 * Return: Always 0
 */
int main(void)
{
	int f, k;

	f = 48;
	k = 48;

	while (f < 58)
	{
		k = 48;
		while (k < 58)
		{
			if (k != f && k < f)
			{
				putchar(k);
				putchar(f);
				if (k == 57 && f == 56)
					break;
				putchar(',');
				putchar(' ');
			}
			f++;
		}
		k++;
	}
	putchar(10);
	return (0);
}
