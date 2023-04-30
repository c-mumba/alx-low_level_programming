#include "lists.h"

/**
 * insert_nodeint_at_index - print signly likned list
 * @head: string - head
 * @idx: idx
 * @n: n
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *new_node = NULL;
	listint_t *traverse_node = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL || *head == NULL)
		return (NULL);
	new_node->n = n;
	while (traverse_node)
	{
		if (counter == idx - 1)
		{
			new_node->next = traverse_node->next;
			traverse_node->next = new_node;
			return (new_node);
		}
		counter++;
		traverse_node = traverse_node->next;
	}
	return (NULL);
}
