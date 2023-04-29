#include "lists.h"

/**
 * free_listint - print signly likned list
 * @head: string - head
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

