#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new memory space
 * @str: char pointer passed
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *duplicate;

	str = _strdup(duplicate);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		return (duplicate);
	}
	free(str);
	return (0);
}
