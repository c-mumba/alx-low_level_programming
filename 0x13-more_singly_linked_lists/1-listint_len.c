#include "lists.h"

/**
 * listint_len - print signly likned list
 * @h: string - head
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *head = h;
	unsigned int counter = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		head = head->next;
		counter++;
	}
	counter++;
	return (counter);
}
