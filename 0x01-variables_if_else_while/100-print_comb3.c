#include <stdio.h>
#include <stdlib.h>
/**
 * main - print numbers between 00 and 89
 * Return: Always 0
 */
int main(void)
{
	int f, k;

	f = 48;
	k = 48;
	for (f = 48; f <= 56; f++)
	{
		for (k = 48; k <= 57; k++)
		{
			if (f != k && f < k)
			{
				putchar(f);
				putchar(k);
				if (f == 56 && k == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
