#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minum size of integers
 * @max: maximum size of integers
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, t = min;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (!ptr)
		return (NULL);

	while (i <= max - min)
		ptr[i++] = t++;

	return (ptr);
}
