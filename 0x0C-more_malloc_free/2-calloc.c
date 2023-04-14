#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - Short description, single line
 * @nmemb: Description of parameter x
(* @size: size
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nmemb * size))
		ptr[i++] = 0;
	return (ptr);
}
