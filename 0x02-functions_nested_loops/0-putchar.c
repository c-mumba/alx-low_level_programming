#ifndef main.h
#define main.h

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif

#include <stdio.h>


/**
 * main  - Prints whether the last digit of a random number is greater than 5
 * Return: 0
 * print_alphabet_x10 - print alphabet
 *return nothing
 */


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

