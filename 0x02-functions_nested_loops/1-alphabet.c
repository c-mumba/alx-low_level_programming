#include "main.h"

/**
 * print_alphabet  - Prints alphabet
 */


int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
