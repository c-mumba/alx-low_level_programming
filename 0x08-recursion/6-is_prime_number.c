#include "main.h"
/**
 * is_prime_number2 - Short description, single line
 * @a: Description of parameter x
 * @b: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int is_prime_number2(int a, int b)
{
	if (a < 0)
	{
		return (0);
	}
	if (a == 1 || a == 0)
	{
		return (0);
	}
	if (a % b == 0 && a != b)
	{
		return (0);
	}
	if (a == b)
	{
		return (1);
	}
	return (is_prime_number2(a, b + 1));
}

/**
 * is_prime_number - Short description, single line
 * @n: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int is_prime_number(int n)
{
	return (is_prime_number2(n, 2));
}
