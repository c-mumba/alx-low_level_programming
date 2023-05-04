#include "main.h"

/**
 * set_bit - Short description, single line
 * @n: Description of parameter x
 * @index: index
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;
	unsigned long int d;

	s = sizeof(*n) * 8 - 1;
	if (index > s)
		return (-1);
	d = 1 << index;
	*n = d | *n;
	return (1);
}
