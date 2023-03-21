#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * return nothing
 */


void print_alphabet_x10(void)
{
	int num = 0, letter;

	while (num <= 9)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		num++;
	}
}

