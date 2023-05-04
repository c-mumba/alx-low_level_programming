#include "main.h"

/**
 * print_binary - Short description, single line
 * @n: Description of parameter x
 * Description: Longer description of the function)?
 * section header: Section description)*
 * Return: Description of the returned value
 */


void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	printf("%lu", n % 2);
}
