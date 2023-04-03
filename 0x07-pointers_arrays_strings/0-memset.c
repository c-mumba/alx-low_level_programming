#include "main.h"

/**
 * _memset - memset function
 * @s: s
 * @b: b
 * @b: n
 * Return: Description of the returned value
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

