#include "main.h"
/**
 * times_table - Short description, single line
 * Return: 0 or 1 or -1
 * Print_long - print long character values
 * Return: char values
 */

void print_long(int value)
{
	if(value != 0)
	{
		print_long(value/10);
		_putchar((value%10) + '0');
	}
}

void times_table(void)
{
	int fst = 0, snd, soln;

	while (fst <= 9)
	{
		snd = 0;

		while (snd <= 9)
		{
			soln = fst * snd;
			
			if (soln <= 9)
			{
				_putchar(soln + '0');

				if (snd != 9)
				{
					_putchar(',');
				}
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				print_long(soln);

				if (snd != 9)
				{
					_putchar(',');
				}
				_putchar(' ');
			}
			snd++;
		}
		fst++;
		_putchar('\n');
	}
}
