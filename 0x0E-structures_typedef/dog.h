#ifndef dog_h
#define dog_h
#include <stdio.h>

/* dog.h */

/**
 * struct dog - function name of type struct
 * typedef - assigns a new alias to the funciton name
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * intial function name was struct dog,
 * typedef is used to assign dog_t as new name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
