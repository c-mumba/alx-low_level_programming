#include "lists.h"
#include <stdio.h>



/**
 * print_list - nodes
 * @h: head
(* Return: Return characters printed
 */

size_t print_list(const list_t *h)
{
	const list_t *ap = h;
	size_t counter = 0;

	while (ap != NULL)
	{
		if (ap->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", ap->len, ap->str);
		ap = ap->next;
		counter++;
	}
	return (counter);
}

