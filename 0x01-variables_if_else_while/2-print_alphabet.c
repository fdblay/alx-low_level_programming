#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}
	putchar(10);
	return (0);
}
