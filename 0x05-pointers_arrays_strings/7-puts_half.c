#include "main.h"

/**
 * puts_half - second half of a string.
 * @str: parameter string.
 * Return: no return.
 */

void puts_half(char *str)
{

	int counter = 0, j;

	while (counter >= 0)
	{

		if (str[counter] == '\0')
			break;
		counter++;
	}
	if (counter % 2 == 1)
		j = counter / 2;
	else
		j = (counter - 1) / 2;

	for (j++; j < counter; j++)
		_putchar(str[j]);
	_putchar('\n');
}
