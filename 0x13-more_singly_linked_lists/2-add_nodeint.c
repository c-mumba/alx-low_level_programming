#include "lists.h"

/**
 * add_nodeint - print signly likned list
 * @head: string - head
 * @n: n
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	*head = new_node;
	return (*head);
}
