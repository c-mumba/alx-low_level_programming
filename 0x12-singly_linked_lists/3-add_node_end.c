#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add node to beginning
 * @head: head
 * @str: string data
(* Return: Return characters printed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *last_node = *head;
	int count = 0;
	char *dup = strdup(str);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = dup;
	new_node->next = NULL;

	while (str[count] != '\0')
		count++;
	new_node->len = count;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}

