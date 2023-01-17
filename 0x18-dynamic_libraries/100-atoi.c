#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert character string to integer
 * @s: character pointer
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int res = 0;

	for (int i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';

	return (res);
}
