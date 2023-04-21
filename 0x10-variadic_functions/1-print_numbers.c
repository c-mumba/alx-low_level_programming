#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Main function
 * @separator: The number of arguments supplied to the program.
 * @n: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(ap);
}
