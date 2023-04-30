#include "lists.h"

/**
 * sum_listint - print signly likned list
 * @head: string - head
 * Description: singly linked list node structure
 * Return: Description of the returned value
 */

int sum_listint(listint_t *head)
{
	int summ = 0;

	if (head == NULL)
		return (summ);
	while (head)
	{
		summ = summ + head->n;
		head = head->next;
	}
	return (summ);
}

