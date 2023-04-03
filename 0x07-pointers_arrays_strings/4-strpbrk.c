#include "main.h"
/**
 * _strpbrk - strpbrk func
 * @s: s
 * @accept: accept
 * Return: Description of the returned value
 */

char *_strpbrk(char *s, char *accept)
{

	int counter, i;

	counter = 0;

	while (s[counter] != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (s[counter] == accept[i])
			{
				return (s + counter);
			}
			i++;
		}
		counter++;
	}
	return (0);
}
