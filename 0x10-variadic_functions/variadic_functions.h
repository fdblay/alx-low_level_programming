#ifndef VARFUNC_H
#define VARFUNC_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif /* VARFUNC_H */
