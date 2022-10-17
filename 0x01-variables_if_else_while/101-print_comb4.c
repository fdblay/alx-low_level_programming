#include <stdio.h>
#include <stdlib.h>
/**
 * main - print numbers between 012 and 789
 * Return: Always 0
 */
int main(void)
{
	int f, a, k;

	f = 48;
	k = 48;
	a = 48;
	for (f = 48; f <= 55; f++)
	{
		for (a = 48; a <= 56; a++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (f != a && a != k && f < a && a < k)
				{
					putchar(f);
					putchar(a);
					putchar(k);
					if (f == 55 a == 56 && k == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
