#include "FUNCTION_POINTERS_H"

/**
 * print_name - a function that prints a name
 * @name: char pointer of name to print
 * @f: a function pointer that takes a char argument
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
