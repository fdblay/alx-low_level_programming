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
	unsigned int len1 = 0;
	unsigned int len2 = 0, str;
	char *cat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
		n = len2;

	cat = malloc(sizeof(char) * (len1 + n + 1));
	if (cat == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (str = 0; str < len1; str++)
	{
		cat[str] = s1[str];
	}
	for (; str < (len1 + n); str++)
	{
		cat[str] = s2[str - len1];
	}

	cat[str] = '\0';
	return (cat);
}
