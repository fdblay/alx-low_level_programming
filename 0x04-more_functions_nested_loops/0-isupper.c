#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: formal parameter passed
* Return: 1 or 0
*/

int _isupper(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
