#include <stdio.h>
#include <stdlib.h>

/**
 * main - Short description, single line
 * @argv: Description of parameter x
(* @argc: Description of parameter x
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0 Description of the returned value
 */

int main(int argc, char **argv)
{
	int change, counter;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%i\n", 0);
		return (1);
	}

	for (counter = 0; change > 0; counter++)
	{
		if (change >= 25)
			change = change - 25;
		else if (change >= 10)
		{
			change = change - 10;
		}
		else if (change >= 5)
		{
			change = change - 5;
		}
		else if (change >= 2)
		{
			change = change - 2;
		}
		else if (change >= 1)
		{
			change = change - 1;
		}
		counter++;
	}
	printf("%d\n", counter);
	return (0);
}
