#include "main.h"

/**
 * main  - runs print_alphabet function
 * return 0
 * print_alphabet  - Prints alphabet
 * main - runs print_alphabet function
 * Return: 0
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
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
