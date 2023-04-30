#include "lists.h"

/**
 * pop_listint - print signly likned list
 * @head: string - head
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */

int pop_listint(listint_t **head)
{
	int h_node_data;
	listint_t *tmp = NULL;

	if (*head == NULL)
		return (0);
	h_node_data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (h_node_data);
}


