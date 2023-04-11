#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Short description, single line
 * @size: Description of parameter x
(* @c: Description of parameter x
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

char *create_array(unsigned int size, char c)
{
	char *ptr1;
	unsigned int i;

	ptr1 = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr1[i] = c;
		}
		return (ptr1);
	}
}
