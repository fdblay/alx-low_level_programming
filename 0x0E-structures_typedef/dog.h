#ifndef dog_h
#define dog_h
#include <stdio.h>

/* dog.h */
/**
 * struct dog - initial function name
 * typedef -  assigns an alias to the function
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * struct dog was the initial function name,
 * my_dog is the new function name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

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
#endif
