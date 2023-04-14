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
	unsigned int i, total_len;
	char *ptr;

	char nul = '\0';

	if (s1 == NULL)
	{
		s1 = &nul;
	}

	if (s2 == NULL)
	{
		s2 = &nul;
	}
	if (n > strlen(s2))
	{
		total_len = strlen(s2) + strlen(s1);
	}
	else
	{
		total_len = strlen(s1) + n;
	}

	ptr = malloc(total_len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

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
