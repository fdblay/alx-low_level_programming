#include <stdio.h>
/**
 * before_main - function executes before the main function
 *
 * Description: function will print out some strings before main
 * executes
 * Return: Always 0
 */
void before_main() __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	return (0);
}

