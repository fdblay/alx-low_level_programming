#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name
 * @name: char pointer of name to print
 * @f: a function pointer that takes a char argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
