#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - prints out number of arguments passed to the program
* @argc: first argument passed
* @argv: second argument passed
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("argc = %d\n" argc - 1);

	return (0);
}
