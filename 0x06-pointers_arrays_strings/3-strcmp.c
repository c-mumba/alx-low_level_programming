#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: char 1
 * @s2: char 2
 *
 * Return: 0  or b
 */

int _strcmp(char *s1, char *s2)
{

	int x = 0;
	int y = 0;

	while (s1[x] != '\0' && y == 0)
	{
		y = s1[x] - s2[x];
		x++;
	}
	return (y);
}
