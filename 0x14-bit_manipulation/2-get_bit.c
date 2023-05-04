#include "main.h"

/**
 * get_bit - Short description, single line
 * @n: Description of parameter x
 * @index: index
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;
	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);
	return ((n >> index) & 1);
}
