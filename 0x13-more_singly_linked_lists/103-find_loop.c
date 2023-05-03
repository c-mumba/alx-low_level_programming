#include "lists.h"

/**
* find_listint_loop - finds the loop
* @head: head
* Return: ad
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *headd = head;
	listint_t *tail = head;

	if (!head)
		return (NULL);
	while (headd && tail && tail->next)
	{
		tail = tail->next->next;
		headd = headd->next;
		if (tail == headd)
		{
			headd = head;
			while (headd != tail)
			{
				headd = headd->next;
				tail = tail->next;
			}
			return (tail);
		}
	}
	return (NULL);
}
