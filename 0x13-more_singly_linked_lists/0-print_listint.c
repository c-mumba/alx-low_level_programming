#include "lists.h"


/**
 * print_listint - print signly likned list
 * @h: string - head
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	unsigned int counter = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		printf("%i\n", head->n);
		head = head->next;
		counter++;
	}
	printf("%i\n", head->n);
	counter++;
	return (counter);
}

