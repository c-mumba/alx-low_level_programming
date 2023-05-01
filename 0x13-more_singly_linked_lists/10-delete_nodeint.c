#include "lists.h"

/**
 * delete_nodeint_at_index - print signly likned list
 * @head: string - head
 * @index: index
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0, counter1 = 0;
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;
	listint_t *current_node = NULL;
	listint_t *count = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	while (count->next != NULL)
	{
		count = count->next;
		counter1++;
	}
	counter++;
	if (index > counter1)
		return (-1);

	if (index == 0)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
		return (1);
	}
	current_node = *head;
	while (current_node)
	{
		if (counter == index)
		{
			prev_node->next = next_node;
			free(current_node);
			return (1);
		}
		counter++;
		prev_node = current_node;
		current_node = current_node->next;
		next_node = current_node->next;
	}
	return (-1);
}

