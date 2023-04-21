#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Short description, single line
 * @n: Description of parameter x
(* Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	int summ = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		summ += va_arg(ap, int);
	}
	va_end(ap);
	return (summ);
}
