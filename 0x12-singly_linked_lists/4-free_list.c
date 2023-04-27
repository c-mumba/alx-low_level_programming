#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * free_list - free linked list
 * @head: head
 * Return: Return characters printed
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
