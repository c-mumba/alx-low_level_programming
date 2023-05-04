#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - Short description, single line
 * @b: Description of parameter x
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int summ = 0;
	unsigned int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			summ = (summ << 1) | 1;
		else if (b[i] == '0')
			summ <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (summ);
}

