#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - Short description, single line
 * @s1: Description of parameter x
(* @s2: Description of parameter x
(* @n: Description of parameter x
 * Return: Description of the returned value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	char *ptr = malloc((sizeof(s1) + sizeof(char) * n) + 1);
	for (i = 0; i < strlen(s1) + n; i++)
	{
		if (i < strlen(s1))
		{
			if (s1[i] != '\0')
			{
				ptr[i] = s1[i];
			}
		}
		else
		{
			if (s2[i - strlen(s1)] != '\0')
			{
				ptr[i] = s2[i - strlen(s1)];
			}
		}
	}
	ptr[strlen(s1) + n] = '\0';
	return (ptr);
}
