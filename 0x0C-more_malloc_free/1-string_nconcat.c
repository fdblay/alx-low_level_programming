#inlcude "main.h"
#include "stdlib.h>

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
	unsigned int len2 = 0;
	char *cat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len2])
	{
		++len2
		++n;
	}

	cat = malloc(sizeof(char) * (n + 1));
	if (cat == NULL)
		return (NULL);
	while (s1[len2])
	{
		cat[len1] = s1[len2];
		++len2;
		++len1;
	}
	while (len2 <= n && s2[len2])
	{
		cat[len1] = s2[len2];
		++len2;
		++len1;
	}

	cat[len1] = '\0';
	return (cat);
}
