#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* check_num - check string if there are digits
* @str: array str
*
*Return: Always 0 (success)
*/

int check_num(char *str)
{
	unsigned int count; /*unsinged int represents positive integers*/

	count = 0;
	while (count < strlen(str)) /*int less than lenght of string array*/
	{
		if (!isdigit(str[count])) /*condition to check for digits*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 if true and 1 if there is an error
*/
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /* count less than argc; goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI -> convert strint to int*/
			sum += str_to_int;
		}

		/*condition to check if a number contains symbols other than digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print the sum total*/

	return (0);
}
