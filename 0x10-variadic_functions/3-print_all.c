#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_int - Short description, single line
 * @ap: Description
 */

void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_char - Short description, single line
 * @ap: Description
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_string - Short description, single line
 * @ap: Description
 */

void print_string(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}

/**
 * print_float - Short description, single line
 * @ap: Description
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}


/**
 * print_all - Short description, single line
 * @format: Description
 */

void print_all(const char * const format, ...)
{
	int counter1, counter2;

	type1 arr1[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	char x[] = ", ";
	va_list ap;

	va_start(ap, format);
	counter1 = 0;

	while (format != NULL && format[counter1] != '\0')
	{
		counter2 = 0;
		while (arr1[counter2].a != '\0')
		{
			if (arr1[counter2].a == format[counter1])
			{
				arr1[counter2].f(ap);
				if (format[counter1 + 1] != '\0')
					printf("%s", x);
			}
			counter2++;
		}
		counter1++;
	}
	printf("\n");
	va_end(ap);
}
