#include "main.h"

/**
 * clear_bit - Short description, single line
 * @n: Description of parameter x
 * @index: index
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s, b;

	s = sizeof(*n) * 8 - 1;

	if (index > s)
		return (-1);
	b = 1 << index;
	*n = *n & ~b;
	return (1);
}

