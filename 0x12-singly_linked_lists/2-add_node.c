#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
 #include <string.h>
/**
 * add_node - add node to beginning
 * @head: head
 * @str: string data
(* Return: Return characters printed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int count = 0;
	list_t *new_node = NULL;
	new_node = (list_t *)malloc(sizeof(list_t));
	dup = strdup(str);

	if (new_node == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;
	new_node->str = dup;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
