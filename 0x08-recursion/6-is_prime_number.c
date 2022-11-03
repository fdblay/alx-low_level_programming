#include "main.h"

/**
* is_prime_number - returns 1 if input int is a prime number
* @n: parameter passed
* Return: 1 if prime number else 0
*/
int is_prime_number(int n)
{
	int m;

	if (m == 1)
	{
		return (0);
	}
	else
	{
		if (n % m == 0)
		{
			return (1);
		}
		else
		{
			return (is_prime_number(n, m - 1));
		}
	}
}
