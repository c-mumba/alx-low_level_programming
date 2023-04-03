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

	while (s[counter] != '\0')
	{
		if (s[counter] == c)
		{
			return (s + counter);
		}
		else if (s[counter + 1] == c)
		{
			return (s + counter + 1);
		}
		counter++;
	}
	return (s + counter);
}
