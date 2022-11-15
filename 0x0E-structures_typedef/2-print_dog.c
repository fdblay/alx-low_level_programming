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
		return;
	if (d->name == NULL)
		d->name = "(nil)";

	if (d->age == NULL)
		d->age = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("name: %s\nage: %f\nowner: %s", d->name, d->age, d->owner);

}

