#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
/**
 * main  - Prints whether the last digit of a random number is greater than 5
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x) + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('/n');
	return (0);
}

