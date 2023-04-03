#include "main.h"

/**
 * _strspn - len pref
 *
 * @s: s
 * @accept: accept
 *
 * Return: n bytes in intial segment of s which
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int current = 0;
	int t;

	while (*s)
	{
		i = 0;
		t = current;

		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				current++;
			i++;
		}
		if (t == current)
			break;
		s++;
	}
	return (current);
}
