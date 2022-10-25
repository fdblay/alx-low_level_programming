#include "main.h"

/**
* print_array - prints n elements of an array of integers
* @a: first parameter
* @n: second parameter
*/
void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		printf("%d", a[f]);
		if (f != n - 1)
			printf(", ");

	}

	printf("\n")
}
