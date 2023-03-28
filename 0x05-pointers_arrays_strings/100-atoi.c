#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - string to integer
 * @s: integer
 * Return: interger value of string
 */

int _atoi(char *s)
{

	int num = 0;
	int sign = 1;
	int counter = 0;
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] <= '9' && s[i] >= '0')
		{
			num = num * 10 + ((int)s[i] - 48);

			if (counter == 0 && i != 0)
			{

				if (s[i - 1] == '-')
				{
					sign = -1;
				}
			}
			counter++;

			if (s[i + 1] > '9' || s[i + 1] < '0')
			{
				return (num * sign);
			}
		}
	}
	return (num * sign);
}

