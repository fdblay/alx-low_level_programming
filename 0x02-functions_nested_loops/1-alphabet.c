#include "main.h"
/**
* print_alphabet - prints alphabets a-z
*/
void print_alphabet(void)
{
	int lc;

	for (lc = 97; lc <= 122; lc++)
	{
		_putchar(lc);
	}
	_putchar(10);
}
