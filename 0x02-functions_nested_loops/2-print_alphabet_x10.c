#include "main.h"
/**
* print_alphabet_x10 - prints alphabets a-z 10 times
*/
void print_alphabet_x10(void)
{
	int lc;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (lc = 97; lc <= 122; lc++)
		{
			_putchar(lc);
		}
		_putchar(10);
	}
}
