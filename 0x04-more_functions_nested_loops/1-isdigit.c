#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for a digit between 0 to 9
* @c: parameter passed
* Return: 1 or 0
*/

int _isdigit(int c)
{
	return ((c >= 0 && c <= 9) || (c != 0 && c != 9));
}
