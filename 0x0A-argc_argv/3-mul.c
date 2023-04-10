#include <stdio.h>
#include <stdlib.h>

/**
 * main - Short description, single line
 * @argv: Description of parameter x
(* @argc: Description of parameter x
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int main(int argc, char **argv)
{
	int i;

	int soln = 1;

	if (argc == 1 || argc == 0)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < 3; i++)
		soln *= atoi(argv[i]);
	printf("%d\n", soln);
	return (0);
}
