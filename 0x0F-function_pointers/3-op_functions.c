#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add numbers
 * @a: a
 * @b: b
 *
 * Description: add two input
 * Return: value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: a
 * @b: b
 *
 * Description: subtract two input
 * Return: value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: a
 * @b: b
 *
 * Description: multiply two input
 * Return: value
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - division
 * @a: a
 * @b: b
 *
 * Description: divide two input
 * Return: value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: a
 * @b: b
 *
 * Description: mod two input
 * Return: value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
