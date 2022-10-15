/*Outputing characters with putchar() */

#include <stdio.h>
/**
 * main - prints alphabet in lower case expempting q and e
 * Return: Always 0
 */

int main(void)
{
	char lca;

	for (lca = 'a'; lca <= 'z'; lca++)
	{
		if (lca != 'e' && lca != 'q')
		{
			putchar(lca);
		}
	}

	putchar(10);
	return (0);
}
