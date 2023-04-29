#include "lists.h"

/**
 * free_listint2 - print signly likned list
 * @head: string - head
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}


