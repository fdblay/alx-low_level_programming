#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: first parameter
* @src: second parameter
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
