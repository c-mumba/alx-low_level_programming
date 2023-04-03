#include "main.h"

/**
 * _strstr - strpbrk func
 * @haystack: haystack
 * @needle: needle
 * Return: Description of the returned value
 */

char *_strstr(char *haystack, char *needle)
{
	int counter, i, tester;

	counter = 0;

	while (haystack[counter] != '\0')
	{
		i = 0;

		while (haystack[counter + i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack + counter);
			}
			i++;
		}
		counter++;
	}
	return (NULL);
}
