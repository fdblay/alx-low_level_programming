#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: formal parameter passed
* Return: on sucess 1 else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
