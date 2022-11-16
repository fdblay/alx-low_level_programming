#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evalute
 * Return: strlen
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}

/**
 * *_strcpy - copies the string pointed to by the source
 * string not excluding the null terminator '\0'
 * to the buffer pointed to by destination string
 * @dest: destination for the copied string
 * @src: source of copied string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, l;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (l = 0; l < len; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog as first var
 * @age: age of dog as second var
 * @owner: name of dog's owner as 3rd var
 *
 * Return: pointer to new dog on success else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	mydog = malloc(dog_t);
	if (dog_t == NULL)
		return (NULL);

	mydog->name = malloc(sizeof(char) * (len1 + 1));
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}

	mydog->owner = malloc(sizeof(char) * (len2 + 1));
	if (mydog->owner == NULL)
	{
		free(mydog);
		free(mydog->name);
		return (NULL);
	}

	_strcpy(mydog->name, name);
	_strcpy(mydog->owner, owner);
	mydog->age = age;

	return (mydog);
}
