#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: an element in the array
 * @size: bytes for each address
 * Return: a pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
