#include <stdio.h>
/**
 * main - prints alphabed in lower && upper case
 * Return: Always 0
 */
int main(void)
{
	char lca, uca;

	for (lca = 'a'; lca <= 'z'; lca++)
	{
		putchar(lca);
	}

	for (uca = 'A'; uca <= 'Z'; uca++)
	{
		putchar(uca);
	}

	putchar(10);
	return (0);
}
