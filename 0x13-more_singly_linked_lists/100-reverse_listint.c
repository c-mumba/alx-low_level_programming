#include "lists.h"
/**
* reverse_listint - reverses
* @head: head
* Return: listint_t
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ap;
	listint_t *bd;

	ap = 0;
	while (*head != NULL)
	{
		bd = (*head)->next;
		(*head)->next = ap;
		ap = (*head);
		(*head) = bd;
	}
	(*head) = ap;
	return (*head);
}
