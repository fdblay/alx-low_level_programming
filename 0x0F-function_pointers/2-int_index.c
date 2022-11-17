#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: size of array
 * @cmp: pointer to the function for comparing
 *
 * Return: index of the first element for which
 * cmp doesn't return 0, or -1 if no element matches
 * or size is negative.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0)
					return (i);
		}
	}
	return (-1);
}
