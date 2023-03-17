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

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		else
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
