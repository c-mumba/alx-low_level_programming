#include "main.h"

/**
 * _strstr - strpbrk func
 * @haystack: haystack
 * @needle: needle
 * Return: Description of the returned value
 */

char *_strstr(char *haystack, char *needle)
{
	int counter, i;
	char *ptr;

	counter = 0;

	while (haystack[counter] != '\0')
	{
		i = 0;

		while (haystack[counter + i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				ptr = haystack + counter;
				return (ptr);
			}
			i++;
		}
		counter++;
	}
	return ('\0');
}
