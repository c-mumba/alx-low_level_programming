#include "main.h"

/**
 * print_last_digit - Short description, single line
 * @n: Description of parameter n
 * Return: 0 or 1 or -1
 */


int print_last_digit(int n){
	
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		_putchar('0' + n % 10);
		return (n % 10);
	}
	else
	{
		_putchar('0' + n % 10);
		return (n % 10);
	}
}
