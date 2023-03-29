#include "main.h"

/**
 * leet - encode a string
 * @str: the string
 * Return: encoded string
 */

char *leet(char *str)
{

	int x, y;

	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	x = 0;

	while (str[x] != '\0')
	{
		y = 0;

		while (c[y] != '\0')
		{

			if (str[x] == c[y])
			{
				str[x] = n[y];
			}
			y++;
		}
		x++;
	}
	return (str);
}
