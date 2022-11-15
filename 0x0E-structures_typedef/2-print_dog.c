#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the variables of struct dog
 * @d: points to struct dog
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 * Return: 0, nil or NULL
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	
	if (d == NULL)
		return (NULL);
	else if (d->name == NULL
		 d->dog == NULL
		 d->owner == NULL)
		return (nil);
	printf("name: %s\nage: %f\nowner: %s", d->name, d->age, d->owner);
	return (0);
}

