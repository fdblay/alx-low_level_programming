#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf(n, "is positive %d\n");
	}

	if (n == 0)
	{
		printf(n, "is zero %d\n");
	}

	if (n < 0)
	{
		printf(n, "is negative %d\n");
	}

	return (0);
}
