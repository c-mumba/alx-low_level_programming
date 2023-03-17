#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main  - Prints whether the last digit of a random number is greater than 5
 * Return: 0
 */
int main(void)
{
    int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    if (n%10 > 5)
    {
        printf("Last digit of %i is %i and is greater than %i\n", n, n%10 , 5);
    }
    else if (n%10 == 0)
    {
        printf("Last digit of %i is %i and is %i\n", n, 0, 0);
    }
    else
    {
        printf("Last digit of %i is %i and is less that 6 and not 0\n", n, n%10);
    }
	
	return (0);
}
