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

	ptr1 = (char *)malloc(sizeof(str) + 5);

	if (ptr1 == NULL || str == NULL)
	{
		return (NULL);
	}
	ptr1 = strcpy(ptr1, str);
	return (ptr1);
}
