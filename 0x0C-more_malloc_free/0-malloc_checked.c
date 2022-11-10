#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -> function allocates memory using malloc
 * @b: unsigned int variable passed
 * Return: a pointer or an error message
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *m;

	m = malloc(b * sizeof(unsigned int));
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
