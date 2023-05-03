#include "lists.h"

/**
* free_listint_safe - safely frees list
* @h: h
* Return: number
*/

size_t free_listint_safe(listint_t **h)
{
	size_t head;
	listint_t *tail;

	head = 0;
	if (!h)
		return (head);
	while (*h && *h > (*h)->next)
	{
		tail = *h;
		*h = (*h)->next;
		free(tail);
		head++;
	}
	if (*h)
	{
		free(*h);
		*h = NULL;
		head++;
	}
	return (head);
}
