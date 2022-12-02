#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: argument of data type char
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int total = 0, dvalue = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
			total += dvalue;
		dvalue *= 2;
	}
	return (total);
}
