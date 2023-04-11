#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - Short description, single line
 * @s1: Description of parameter x
(* @s2: Description of parameter x
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr1;
	unsigned int i, j, len, f;

	i = 0;
	j = 0;

	if (s1 != NULL)
	{

		while (s1[i] != '\0')
		{
			i++;
		}
	}

	if (s2 != NULL)
	{

		while (s2[j] != '\0')
		{
			j++;
		}
	}
	len = i + j;

	ptr1 = (char *)malloc(len * sizeof(char) + 2);

	for (f = 0; f < len ; f++)
	{

		if (f < i)
		{
			ptr1[f] = s1[f];
		}
		else
		{
			ptr1[f] = s2[f - i];
		}
	}
	ptr1[len] = '\0';
	return (ptr1);
}
