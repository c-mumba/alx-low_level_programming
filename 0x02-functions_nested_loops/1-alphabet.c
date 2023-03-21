#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
/**
 * main  - Prints whether the last digit of a random number is greater than 5
 * Return: 0
 */

void print_alphabet(void);

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
