#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Short description, single line
 * @argv: Description of parameter x
(* @argc: Description of parameter x
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int main(int argc, char *argv[])
{
	int i, j, summ;

	if (argc == 1 || argc == 0)
		printf("0\n");
	else
	{
		summ = 0;

		for (i = 1; i < argc; i++)
		{

			for (j = 0; j < (int)strlen(argv[i]); j++)
			{

				if (isdigit(*(argv[i] + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			summ += atoi(argv[i]);
		}
		printf("%d\n", summ);
	}
	return (0);
}
