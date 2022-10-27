#include "main.h"

/**
* string_toupper - changes all lowercase to uppercase
* @n: pointer
* Return: char
*/
char *string_toupper(char *n)
{
	int k;

	k = 0;
	while (n[k] != '\0')
	{
		if (n[k] >= 97 && n[k] <= 122)
			n[k] = n[k] - 32;
		k++;
	}
	return (n)
}
