#include "main.h"

/**
* _strcpy - copy char src to dest
* @dest: first parameter
* @src: second parameter
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	_strcpy(*dest, *src);
	_putchar(*dest);

	_putchar(10);
	return (dest);
}
