#include <stdlib.h>
#include <stdio.h>

/**
* main - prints minimum number of coins to make change
* @argc: argument count
* @argv: argument vector
* Return: 0 and 1
*/
int main(int argc, char *argv[])
{
	int place, total, change, all;
	int coins[] = {25, 10, 5, 2, 1};

	place = total = change = all = 0;

	if (argc != 1) /*if no. or args passed isn't exactly 1*/
	{
		puts("Error"); /*print Error followed by a new line*/
		return (1);
	}

	total = atoi(argv[1]); /*convert string to int*/

	if (total <= 0) /*check if number passed is negative*/
	{
		puts("0"); /*print zero and a new line*/
		return (0);
	}

	while (coins[place] != '\0')
	{
		if (total >= coins[place])
		{
			all = (total / coins[place]);
			change += all;
			total -= coins[place] * all;
		}
		place++;
	}

	printf("%d\n", change);
	return (0);
}
