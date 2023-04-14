#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - Short description, single line
 * @ptr: Description of parameter x
(* @old_size: size
 * @new_size: Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
