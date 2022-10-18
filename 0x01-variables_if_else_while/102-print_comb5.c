#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers between 00 and 99
 * Return: Always 0
 */
int main(void)
{
	int  f, k;

	for (f = 0; f < 100; f++)
	{
		for (k = 0; k < 100; k++)
		{
			if (f < k)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar(' ');
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				if (f != 98 || k != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
