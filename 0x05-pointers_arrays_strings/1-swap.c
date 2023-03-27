#include "main.h"
/**
 * swap_int - swap value of 2 integers
 * @a: parameter a
 * @b: parameter b
 */

void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
