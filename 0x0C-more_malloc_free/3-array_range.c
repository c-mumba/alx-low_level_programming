#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - Short description, single line
 * @min: Description of parameter x
(* @max: size
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j, len, summ;

	if (min > max)
		return (NULL);

	summ = max - min;
	len = sizeof(int) * (summ + 1);
	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);

	j = min;
	i = 0;

	while (i <= summ)
		ptr[i++] = j++;
	return (ptr);
}
