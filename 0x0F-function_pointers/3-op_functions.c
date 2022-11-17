#include "3-calc.h"

/**
 * op_add - calculates the sum of two ints
 * @a: first int parameter
 * @b: second int parameter
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two ints
 * @a: first int parameter
 * @b: second int parameter
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two ints
 * @a: first int parameter
 * @b: second int parameter
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of two ints
 * @a: first int parameter
 * @b: second int parameter
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of the division of two ints
 * @a: first int parameter
 * @b: second int parameter
 *
 * Return: remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
