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
		printf("is positive \n");
	}

	if (n == 0)
	{
		printf("is zero \n");
	}

	if (n < 0)
	{
		printf("is negative \n");
	}

	return (0);
}
