#include "main.h"

/**
 * _islower - check if lower case
 * @parameterc: c is character
 * Return: 0 or 1
 
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
