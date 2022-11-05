#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - prints out all arguments it receives
* @argc: first argument passed
* @argv: second argument passed
* Return: 0
*/
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}
