#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a func given as a parameter
 * on each element of an array
 * @array: array pointing to type int
 * @size: size of array
 * @action: function pointer to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size = 0; array[size]; ++size)
		return (size);
	action(array[size]);
}
