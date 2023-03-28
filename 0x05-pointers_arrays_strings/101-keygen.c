#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#include "main.h"
/**
 * main - print password
 * Description: Longer description of the function)
 * Return: password
 */

int main(void)
{

	char passwd[11];
	srand(time(0));

	for (int i = 0; i < 10; i++)
{
printf("number = %i and char = %c\n", passwd[i],(rand()%33+126) - '0' );
}
return (passwd);
}

