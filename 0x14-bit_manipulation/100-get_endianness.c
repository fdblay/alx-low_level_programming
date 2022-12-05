#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	/* the least significant bit is set */
	unsigned int n = 1;	/* 00 00 00 01 */

	char *endian = (char *) &n;

	/* if little endian, n will be stored in memory*/
	if (*endian)	/*01 00 00 00, endian = 1*/
	{
		return (1);
	}

	/**
	 * if big endian, n will be stored in memory
	 */

	else	/*01 00 00 00, endian = 1*/
		return (0);
}
