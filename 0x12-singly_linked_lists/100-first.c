#include <stdio.h>
/**
 * before_main - function executes before the main function
 *
 * Description: function will print out some strings before main
 * executes
 * Return: Always 0
 */
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
