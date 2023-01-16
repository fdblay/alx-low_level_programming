#include "main.h"

/**
* _strcpy - copy char src to dest
* @dest: first parameter
* @src: second parameter
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
