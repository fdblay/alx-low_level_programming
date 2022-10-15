#include <stdio.h>

/**
 * main - prints lower cased alphabets in reverse order
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'z'; la >= 'a'; --la)
	{
		putchar(la);
	}
	putchar(10);
	return (0);
}
