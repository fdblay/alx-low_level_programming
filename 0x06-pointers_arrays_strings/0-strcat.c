#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: first parameter
* @src: second parameter
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	dest = _strcat(*dest + *src);
	return (dest);
}
