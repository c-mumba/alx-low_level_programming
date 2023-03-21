#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"


/**
 * main  - Prints whether the last digit of a random number is greater than 5
 * Return: 0
 * print_alphabet_x10 - print alphabet
 *return nothing
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main()
{
	char fs[] = "_putchar";
	int i = 0;
	while (i < 8)
	{
		_putchar(fs[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

