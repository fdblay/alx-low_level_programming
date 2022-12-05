#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - return the number of bits needed to flip
 * one number to the another
 * @n: first bit number
 * @m: second bit number
 *
 * Return: the diferrence
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
