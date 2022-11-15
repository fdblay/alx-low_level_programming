#include "main.h"
#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: points to address of struct dog
 * @name: first variable under struct dog
 * @age: second variable
 * @owner: third variable
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d = {name, age, owner};

}
