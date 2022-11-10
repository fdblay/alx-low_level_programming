#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -> concatenates two strings
 * @s1: points to destination string
 * @s2: points to source string
 * @n: the n size for concatenation
 * Return: pointer or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n;
	unsigned int str;
	char *cat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	for (str = 0; s1[str]; str++)
	{
		len++;
	}

	cat = malloc(sizeof(char) * (len + 1));
	if (cat == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (str = 0; s1[str]; str++)
	{
		cat[len++] = s1[str];
	}
	for (str = 0; s2[str]; && str < n; str++)
	{
		cat[len++] = s2[str];
	}

	cat[len] = '\0';
	return (cat);
}
