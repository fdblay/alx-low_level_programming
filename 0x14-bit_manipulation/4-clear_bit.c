#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at a given index
 * @n: bit value
 * @index: position of bit
 *
 * Return: 1 on success else -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
