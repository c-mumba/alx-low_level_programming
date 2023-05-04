#include "main.h"

/**
 * get_endianness - Short description, single line
 * Description: Longer description of the function)?
 * section header: Section description)
 * Return: Description of the returned value
 */

int get_endianness(void)
{
	unsigned int i;

	return ((int) (((char *)&i)[0]));
}
