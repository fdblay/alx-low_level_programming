#include "main.h"
/**
* main - prints alphabets a-z
* Return: Always 0
*/
int main(void)
{
	int lc;

	for (lc = 97; lc <= 122; lc++)
	{
		_putchar(lc);
	}
	_putchar(10);
	return (0);
}
