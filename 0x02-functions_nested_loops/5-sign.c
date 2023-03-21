#include "main.h"
/**
 * print_sign - Short description, single line
 * @n: Description of parameter x
 * Return: 0 or 1 or -1
 */


int print_sign(int n)
{
	if( n > 0)
	{
		_putchar('+');
		_putchar('1');
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('1');
		_putchar('\n');
		return (-1);
	}
}
