#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - short
 * @separator: The number of arguments supplied to the program.
 * @n: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, char*);
		if (a == NULL)
		a = "nil";
		printf("%s", a);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
