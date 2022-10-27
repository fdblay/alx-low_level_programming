#include "main.h"

/**
* reverse_array - reverse content of an array of integers
* @a: an array of integers
* @n: the number of elements to swap
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int k;
	int l;

	for (k = 0; k < n; k++)
	{
		n--;
		l = a[k];
		a[k] = a[n];
		a[n] = l;
	}
}
