#include "main.h"
/**
 * _strlen - find length of a string
 * @s: string parameter
 * return: string 
 */

int _strlen(char *s)
{
	char *p = s;
	int str_len = 0;
	while ( *p != '\0')
	{
		str_len++;
		p++;
	}
	return (str_len);
}
