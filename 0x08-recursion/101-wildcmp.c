#include "main.h"

/**
 * wildcmp - Short description, single line
 * @s1: Description of parameter x
(* @s2: Description of parameter x
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 != *s1)
	{
		if (*s2 == '*')
		{
		}
		else
		{
			return (0);
		}
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
