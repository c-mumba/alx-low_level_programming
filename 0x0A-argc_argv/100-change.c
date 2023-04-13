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
	int change, counter;

	counter = 0;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		return (0);

	change = atoi(argv[1]);
	while (change != 0)
	{
		if (change >= 25)
		{
			change = change - 25;
		}
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
	printf("%i\n", counter);
	return (0);

}

