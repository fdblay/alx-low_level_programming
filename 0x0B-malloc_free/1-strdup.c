#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new memory space
 * @str: char pointer passed
 * Return: pointer to new copy or NULL if malloc fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
		{
			;
		}

		duplicate = malloc(sizeof(char) * size);
		if (duplicate)
		{
			while (size--)
			{
				duplicate[size] = str[size];
			}
			return (duplicate);
		}
	}
	return (NULL);
}
