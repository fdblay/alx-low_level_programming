#include "main.h"
/**
* _isalpha - checks for a lowercase or uppercase alphabet
* @c: the character to check
* Return: 1 if True and 0 if False
*/
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
