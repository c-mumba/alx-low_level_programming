#include "main.h"

/**
 * _abs - Short description, single line
 * @n: Description of parameter n
 * Return: 0 or 1 or -1
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		n=n*-1;
		return (n);
	}
}
