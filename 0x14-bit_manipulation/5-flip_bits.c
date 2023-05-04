#include "main.h"

/**
 * flip_bits - Short description, single line
 * @n: Description of parameter x
 * @m: index
 * Description: Longer description of the function)?
 * section header: Section description)
 * Return: Description of the returned value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s;
	unsigned long int f;
	unsigned long int i;

	s = sizeof(n) * 8 - 1;
	f = 0;
	i = 0;

	while (i <= s)
	{
		if ((n & 1) != (m & 1))
			f++;
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (f);
}
