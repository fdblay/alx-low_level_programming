#include <unistd.h>
#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: formal parameter passed
* Return: on sucess 1 else 0
*/

int _isupper(int c)
{
	return ((c >= 65 && c <= 90) || (c != 65 && c != 90));
}
