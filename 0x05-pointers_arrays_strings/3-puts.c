#include "main.h"

/**
 * _puts - print string and new line
 * @str: parameter .
 * Return: nothing.
 */

void _puts(char *str)
{

	int c = 0;

	while (c >= 0)
	{

		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[c]);
		c++;
	}
}
