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
	int slen = strlen(b);

	if (*b == '\0')
		return (0);
	for (int i = (slen - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1') total += dvalue;
		dvalue *= 2;
	}
	return (total);
}
