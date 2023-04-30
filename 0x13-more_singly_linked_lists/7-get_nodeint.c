#include "lists.h"

/**
 * get_nodeint_at_index - print signly likned list
 * @head: string - head
 * @index: index
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (counter == index)
			return (head);
		counter++;
		head = head->next;
	}
	return (NULL);
}

