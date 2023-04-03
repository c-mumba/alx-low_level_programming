#include "main.h"

/**
 * _strchr - strchr function
 * @s: s
 * @c: c
 * Return: Description of the returned value
 */

char *_strchr(char *s, char c)
{
	int counter = 0;

	char *ptr;

	while (s[counter] != '\0')
	{
		if (s[counter] == c)
		{
			ptr = s + counter;
			return (ptr);
		}
		counter++;
	}
	return (NULL);
}
