#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>


/**
 * main  - Prints whether the last digit of a random number is greater than 5
 * Return: 0
 *print_alphabet_x10 - print alphabet
 *return nothing
 */


void print_alphabet_x10(void);
int main()
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int num = 0, letter;
	while (num <= 9)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		num++;
	}
}
