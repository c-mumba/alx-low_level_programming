#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Short description, single line
 * @str: Description of parameter x
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

char *_strdup(char *str)
{
	char *ptr1;

	unsigned int counter = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[counter] != '\0')
	{
		counter++;
	}

	ptr1 = (char *)malloc(counter * sizeof(char) + 1);

	if (ptr1 == NULL)
	{
		return (NULL);
	}
	ptr1 = strcpy(ptr1, str);
	return (ptr1);
}
