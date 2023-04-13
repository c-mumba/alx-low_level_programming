#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Short description, single line
 * @b: Description of parameter x
(* Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
