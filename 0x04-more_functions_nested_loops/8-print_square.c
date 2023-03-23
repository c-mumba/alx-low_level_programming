#include "main.h"

/**
 * print_square - function that checks for uppercase character.
 * @size: the int for the paramaters of my function
 * Return: 0
 */
void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size > 0)
	{
		while (x < size)
		{
			while (y < size)
			{
				_putchar('#');
				y++;
			}
		y = 0;
		x++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
