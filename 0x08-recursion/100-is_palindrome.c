#include "main.h"

/**
 * is_palindrome1 - Short description, single line
 * @a: Description of parameter x
 * @l: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */


int is_palindrome1(char *a, int l)
{
	if (*a == '\0')
	{
		return (1);
	}
	if (*a != *(a + l))
	{
		return (0);
	}
	return (is_palindrome1(a + 1, l - 2));
}

/**
 * is_palindrome - Short description, single line
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int is_palindrome(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (is_palindrome1(s, counter - 1));
}
