#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to bit value
 * @index: position of bit value
 *
 * Return: 1 on success else -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (n == 0)
		return (0);

	*n = *n | (1 << index);

	return (1);
}
