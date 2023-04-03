#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print_diagsums
 * @a: a
 * @size: size
 * Return: Description of the returned value
 */

void print_diagsums(int *a, int size)
{
	int counter, sum1, sum2;

	counter = 0;
	sum1 = 0;
	sum2 = 0;

	while (counter < (size * size))
	{

		if (counter % (size + 1) == 0)
		{
			sum1 = sum1 + a[counter];
		}

		if (counter % (size - 1) == 0 && counter > 0 && counter < (size * size) - 1)
		{
			sum2 = sum2 + a[counter];
		}
		counter++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
