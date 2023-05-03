#include "lists.h"
/**
* print_listint_safe - prints the circular linked list
* @head: h
* Return: return
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t ap;
	listint_t *bd = (listint_t *)head;

	ap = 0;
	while (bd && bd > bd->next)
	{
		printf("[%p] %d\n", (void *)bd, bd->n);
		bd = bd->next;
		ap++;
	}
	if (bd)
	{
		printf("[%p] %d\n", (void *)bd, bd->n);
		printf("-> [%p] %d\n", (void *)bd->next, bd->next->n);
		ap++;
	}
	return (ap);
}
