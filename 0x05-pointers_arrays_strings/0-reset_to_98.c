#include "main.h"

/**
* reset_to_98 - takes a pointer int as parameter and updates the value it points to to 98
* @n: parameter passed
* Return: nothing
*/

void reset_to_98(int *n)
{
	int c;

	c = 98;
	n = &c;
}
