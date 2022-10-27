#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first parameter
* @s2: second parameter
* Return: result;
*/
int _strcmp(char *s1, char *s2)
{
	int result;

	result = _strcmp(s1, s2);
	result = _strcmp(s2, s1);
	result = _strcmp(s1, s1);
	return (result);
}
