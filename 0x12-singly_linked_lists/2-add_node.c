#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add node to beginning
 * @head: head
 * @str: string data
(* Return: Return characters printed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new_node = NULL;
	new_node = (list_t *)malloc(sizeof(list_t));
	dup = strdup(str);

	if (new_node == NULL)
		return (NULL);
	new_node->str = dup;
	new_node->len = strlen(dup);
	new_node->next = *head;
	*head = new_node;
	if (*head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (*head);
}
