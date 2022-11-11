#include "main.h"
#include <stdlib>

/**
 * _realloc - reallocates memmory block using malloc and free
 * @ptr: void pointer passed
 * @old_size: initial size of memory
 * @new_size: current size of memory
 * Return: pointer and NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m;

	if (new_size > old_size)
	{
		m = malloc(new_size);
		free(ptr);
		return (m);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		free(ptr);
		return (m);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
