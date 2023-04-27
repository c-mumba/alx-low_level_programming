#include <stdio.h>
#include "lists.h"

/**
 * list_len - return number of nodes
 * @h: head
 * Return: Return characters printed
 */

size_t list_len(const list_t *h)
{
	const list_t *ap = h;
	unsigned int counter = 0;

	while (ap != NULL)
	{
		ap = ap->next;
		counter++;
	}
	return (counter);
}
