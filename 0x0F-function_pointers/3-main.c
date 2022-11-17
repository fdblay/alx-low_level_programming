#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program performs simple operations
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error");
		exit(98);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && num2 == 0)
	{
		printf("Error");
		exit(100);
	}

	calc = func(num1, num2);

	printf("%d\n", calc);

	return (0);
}
