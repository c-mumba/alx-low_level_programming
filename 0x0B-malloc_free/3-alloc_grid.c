#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Short description, single line
 * @width: Description of parameter x
(* @height: Description of parameter x
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int **alloc_grid(int width, int height)
{
	int **ptr1;
	int *p2;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr1 = (int **)malloc(height * sizeof(int *));

	if (ptr1 == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < height; k++)
	{
		ptr1[k] = (int *)malloc(width * sizeof(int));
		if (ptr1[k] == NULL)
		{
			for (k = 0; k < height; k++)
			{
				p2 = ptr1[k];
				free(p2);
			}
			free(ptr1);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr1[i][j] = 0;
		}
	}
	return (ptr1);
}

