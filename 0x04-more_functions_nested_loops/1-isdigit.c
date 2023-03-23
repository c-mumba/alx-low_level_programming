#include "main.h"

/**
 * _isdigit - Check if digit
 * @c: int
 * Return: 1 or  0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
