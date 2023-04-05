#include "main.h"

/**
 * _sqrt_recursion2 - Short description, single line
 * @a: Description of parameter x
 * @b: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int _sqrt_recursion2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a || b < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion2(a, b + 1));
}

/**
 * _sqrt_recursion - square root of n
 * @n: Number Integer
 *
 * Return: 1 or -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 1));
}
