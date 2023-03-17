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
	int i;

	for (x=0;x < 9;x++)
	{
		for (i = x + 1; i < 10;i++)
		{
			putchar((x) + '0');
			putchar((i) + '0');
			if (x == 8 && i == 9)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
