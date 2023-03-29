#include "main.h"

/**
 * string_toupper - converts a string to all upper
 * @str: the string
 * Return: the string that change for uppercase
 */

char *string_toupper(char *str)
{

	int a;

	a = 0;

	while (str[a] != '\0')
	{

		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
